//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_ABSTRACTJSONREADER_H
#define COS214PROJECT_ABSTRACTJSONREADER_H
#include <string>
#include <vector>

class AbstractJSONReader {
public:
    explicit AbstractJSONReader(std::string ctx);
    virtual ~AbstractJSONReader() = default;
    virtual AbstractJSONReader& operator[](std::string key) = 0;
    virtual AbstractJSONReader& operator[](int pos) = 0;
    virtual explicit operator std::string () const = 0;
    virtual explicit operator int() const = 0;
    virtual explicit operator double() const = 0;
protected:
    virtual void addContext(std::string ctx) = 0;

};


#endif //COS214PROJECT_ABSTRACTJSONREADER_H
