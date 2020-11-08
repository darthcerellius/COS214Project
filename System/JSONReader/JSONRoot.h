//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_JSONROOT_H
#define COS214PROJECT_JSONROOT_H
#include "AbstractJSONReader.h"
#include "Iterators/JSONRootIterator.h"
#include "Iterators/JSONObjectHolderIterator.h"

#include <map>

/**
 * @brief Holds JSON objects as key-value pairs
 */
class JSONRoot : public AbstractJSONReader{
private:
    std::map<std::string, AbstractJSONReader*> elements;
public:
    explicit JSONRoot(std::string ctx);
    ~JSONRoot() override;
    AbstractJSONReader& operator[](std::string key) override;
    AbstractJSONReader& operator[](int pos) override;
    explicit operator std::string () const override;
    explicit operator int() const override;
    explicit operator double() const override;
    /**
     * Creates an iterator for the JSONRoot class
     * @return - an iterator to the beginning of the element map
     */
    JSONRootIterator begin();
    /**
     * Creates an iterator for the JSONRoot class
     * @return - an iterator the end of the element map
     */
    JSONRootIterator end();

protected:
    void addContext(std::string ctx) override;
};


#endif //COS214PROJECT_JSONROOT_H
