//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_STRINGELEMENT_H
#define COS214PROJECT_STRINGELEMENT_H

#include "JSONElement.h"

/**
 * @brief Returns a string representation of data.
 */
class StringElement : public JSONElement {
public:
    StringElement(std::string value);
    explicit operator std::string() const override;
    explicit operator int() const override;
    explicit operator double() const override;
};


#endif //COS214PROJECT_STRINGELEMENT_H
