//
// Created by kyle-pc on 2020/11/04.
//

#include "JSONObjectHolder.h"
#include "ElementType.h"
#include "JSONRoot.h"
#include "StringElement.h"
#include "IntegerElement.h"
#include "DoubleElement.h"

JSONObjectHolder::JSONObjectHolder(std::string ctx) : AbstractJSONReader("") {
    JSONObjectHolder::addContext(std::move(ctx));
}

JSONObjectHolder::~JSONObjectHolder() {
    for (auto i = std::begin(children); i != std::end(children); i++) {
        AbstractJSONReader* child = *i;
        delete child;
    }
}

void JSONObjectHolder::addContext(std::string ctx) {
    std::string::iterator strIter = ctx.begin();
    int pushers = 0;
    ElementType type = ElementType::JSON_BLANK;
    AbstractJSONReader* reader;
    std::string substr;
    for(; strIter != ctx.end(); strIter++) {
        bool add = true;
        if (*strIter == '{' && (type == ElementType::JSON_BLANK || type == ElementType::JSON_ROOT)) {
            type = ElementType::JSON_ROOT;
            pushers++;
            add = false;
        }
        if (*strIter == '"') {
            if (type == ElementType::JSON_BLANK) {
                type = ElementType::JSON_STRING;
                add = false;
            } else if (type == ElementType::JSON_STRING) {
                reader = new StringElement(substr);
                children.push_back(reader);
                substr = "";
                add = false;
                type = ElementType::JSON_BLANK;
            }
        }
        if(*strIter == '}' && type == ElementType::JSON_ROOT) {
            pushers--;
            if (pushers == 0){
                reader = new JSONRoot("{" + substr + "}");
                children.push_back(reader);
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
        if (*strIter == ']') {
            if (type == ElementType::JOSN_DOUBLE || type == ElementType::JSON_INTEGER) {
                if (type == ElementType::JOSN_DOUBLE) {
                    reader = new DoubleElement(substr);
                } else {
                    reader = new IntegerElement(substr);
                }
                children.push_back(reader);
                substr = "";
                add = false;
                type = ElementType::JSON_BLANK;
            }
            else if (type == ElementType::JSON_ARRAY) {
                pushers--;
                if (pushers == 0) {
                    reader = new JSONObjectHolder(substr + ",");
                    children.push_back(reader);
                    substr = "";
                    add = false;
                    type = ElementType::JSON_BLANK;
                }
            }
        }
        if (*strIter == '.' && type == ElementType::JSON_INTEGER) {
            type = ElementType::JOSN_DOUBLE;
        }
        if (*strIter == ',') {
            if (type == ElementType::JOSN_DOUBLE) {
                reader = new DoubleElement(substr);
                children.push_back(reader);
                substr = "";
                add = false;
                type = ElementType::JSON_BLANK;
            } else if (type == ElementType::JSON_INTEGER) {
                reader = new IntegerElement(substr);
                children.push_back(reader);
                substr = "";
                add = false;
                type = ElementType::JSON_BLANK;
            } else if (type == ElementType::JSON_BLANK) {
                add = false;
                type = ElementType::JSON_BLANK;
            }
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

AbstractJSONReader &JSONObjectHolder::operator[](std::string key) {
    throw std::runtime_error("Functon not allowed!");
}

AbstractJSONReader &JSONObjectHolder::operator[](int pos) {
    return *children[pos];
}

JSONObjectHolder::operator std::string() const {
    return std::string();
}

JSONObjectHolder::operator int() const {
    return 0;
}

JSONObjectHolder::operator double() const {
    return 0;
}

JSONObjectHolderIterator JSONObjectHolder::begin() {
    return JSONObjectHolderIterator(children.begin());
}

JSONObjectHolderIterator JSONObjectHolder::end() {
    return JSONObjectHolderIterator(children.end());
}
