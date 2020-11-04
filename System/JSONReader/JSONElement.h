//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_JSONELEMENT_H
#define COS214PROJECT_JSONELEMENT_H
#include "AbstractJSONReader.h"

class JSONElement : public AbstractJSONReader{
protected:
    std::string value;
public:
    JSONElement(std::string element);
    ~JSONElement() override = default;
    AbstractJSONReader& operator[](std::string key) override;
    AbstractJSONReader& operator[](int pos) override;

protected:
    void addContext(std::string ctx) override;
};


#endif //COS214PROJECT_JSONELEMENT_H
