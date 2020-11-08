//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_JSONOBJECTHOLDER_H
#define COS214PROJECT_JSONOBJECTHOLDER_H

#include "AbstractJSONReader.h"
#include "Iterators/JSONObjectHolderIterator.h"

class JSONObjectHolder : public AbstractJSONReader {
private:
    std::vector<AbstractJSONReader*> children;
public:
    explicit JSONObjectHolder(std::string ctx);
    ~JSONObjectHolder() override;
    AbstractJSONReader& operator[](std::string key) override;
    AbstractJSONReader& operator[](int pos) override;
    explicit operator std::string () const override;
    explicit operator int() const override;
    explicit operator double() const override;
    /**
     * Creates an iterator for the JSONObjectHolder class
     * @return - an iterator to the beginning of the element list
     */
    JSONObjectHolderIterator begin(); /**
     * Creates an iterator for the JSONObjectHolder class
     * @return - an iterator to the end of the element list
     */
    JSONObjectHolderIterator end();

protected:
    void addContext(std::string ctx) override;
};


#endif //COS214PROJECT_JSONOBJECTHOLDER_H
