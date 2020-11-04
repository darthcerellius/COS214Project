//
// Created by kyle-pc on 2020/11/04.
//

#include "JSONRoot.h"
#include "ElementType.h"
#include "StringElement.h"
#include "IntegerElement.h"
#include "DoubleElement.h"
#include "JSONObjectHolder.h"

JSONRoot::JSONRoot(std::string ctx) : AbstractJSONReader("") {
    JSONRoot::addContext(std::move(ctx));
}

AbstractJSONReader& JSONRoot::operator[](std::string key) {
    return *elements[key];
}

AbstractJSONReader &JSONRoot::operator[](int pos) {
    throw std::runtime_error("Functon not allowed!");
}

void JSONRoot::addContext(std::string ctx) {
    std::string::iterator strIter = ctx.begin();
    int pushers = 0;
    bool isKey = true;
    bool isSubRoot = false;
    ElementType type = ElementType::JSON_BLANK;
    bool keyRead = false;
    AbstractJSONReader* reader;
    std::string substr;
    std::string key;
    for(; strIter != ctx.end(); strIter++) {
        bool add = true;
        if (isKey) {
            if (*strIter == '"') {
                add = false;
                keyRead = !keyRead;
            }
            if (*strIter == ':' && !keyRead) {
                isKey = false;
                add = false;
            }
            if (add && keyRead){
                key += *strIter;
            }
        } else {
            if (*strIter == '{' && (type == ElementType::JSON_BLANK || type == ElementType::JSON_ROOT)) {
                add = type != ElementType::JSON_BLANK;
                type = ElementType::JSON_ROOT;
                pushers++;
            }
            if(*strIter == '}') {
                if (type == ElementType::JOSN_DOUBLE || type == ElementType::JSON_INTEGER) {
                    if (type == ElementType::JOSN_DOUBLE) {
                        reader = new DoubleElement(substr);
                    } else {
                        reader = new IntegerElement(substr);
                    }
                    elements[key] = reader;
                    substr = "";
                    add = false;
                    type = ElementType::JSON_BLANK;
                }
                else if (type == ElementType::JSON_ROOT) {
                    pushers--;
                    if (pushers == 0) {
                        reader = new JSONRoot("{" + substr + "}");
                        elements[key] = reader;
                        substr = "";
                        add = false;
                        //isSubRoot = false;
                        type = ElementType::JSON_BLANK;
                    }
                }
            }
            if (*strIter == '"') {
                if (type == ElementType::JSON_BLANK) {
                    type = ElementType::JSON_STRING;
                    add = false;
                } else if (type == ElementType::JSON_STRING) {
                    reader = new StringElement(substr);
                    elements[key] = reader;
                    substr = "";
                    add = false;
                    type = ElementType::JSON_BLANK;
                }
            }
            if (*strIter == '[' && (type == ElementType::JSON_BLANK || type == ElementType::JSON_ARRAY)) {
                add = type != ElementType::JSON_BLANK;
                type = ElementType::JSON_ARRAY;
                pushers++;
            }
            if (*strIter == ']' && type == ElementType::JSON_ARRAY) {
                pushers--;
                if (pushers == 0) {
                    reader = new JSONObjectHolder(substr + ",");
                    elements[key] = reader;
                    substr = "";
                    add = false;
                    type = ElementType::JSON_BLANK;
                }
            }
            if (*strIter == ',') {
                if (type == ElementType::JOSN_DOUBLE) {
                    reader = new DoubleElement(substr);
                    elements[key] = reader;
                    substr = "";
                    add = false;
                    type = ElementType::JSON_BLANK;
                } else if (type == ElementType::JSON_INTEGER) {
                    reader = new IntegerElement(substr);
                    elements[key] = reader;
                    substr = "";
                    add = false;
                    type = ElementType::JSON_BLANK;
                } if (type == ElementType::JSON_BLANK) {
                    add = false;
                    isKey = true;
                    keyRead = false;
                    key = "";
                }
            }
            if (*strIter == '.' && type == ElementType::JSON_INTEGER) {
                type = ElementType::JOSN_DOUBLE;
            }
            if (isdigit(*strIter) && type == ElementType::JSON_BLANK) {
                type = ElementType::JSON_INTEGER;
            }
            if(isspace(*strIter) && (type == ElementType::JSON_INTEGER || type == ElementType::JOSN_DOUBLE || type == ElementType::JSON_BLANK)) {
                add = false;
            }
            if (add) {
                substr += *strIter;
            }
        }
    }
}

JSONRoot::operator std::string() const {
    return std::string();
}

JSONRoot::operator int() const {
    return 0;
}

JSONRoot::operator double() const {
    return 0;
}

JSONRootIterator JSONRoot::begin() {
    return JSONRootIterator(elements.begin());
}

JSONRootIterator JSONRoot::end() {
    return JSONRootIterator(elements.end());
}

JSONRoot::~JSONRoot() {
    for (auto val : elements) {
        delete val.second;
    }
}
