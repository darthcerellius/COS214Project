//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_INTEGERELEMENT_H
#define COS214PROJECT_INTEGERELEMENT_H


#include "JSONElement.h"

class IntegerElement : public JSONElement {
public:
    IntegerElement(std::string value);
    explicit operator std::string() const override;
    /**
     * Enables this object to be cast to an integer (It's a fancy getter)
     * @return - an integer version of the class data
     */
    explicit operator int() const override;
    explicit operator double() const override;
};


#endif //COS214PROJECT_INTEGERELEMENT_H
