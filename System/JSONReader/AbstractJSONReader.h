//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_ABSTRACTJSONREADER_H
#define COS214PROJECT_ABSTRACTJSONREADER_H
#include <string>
#include <vector>

/** @brief Parses a JSON string and constructs a JSON object.

    A string is passed into a JSON reader (either a JSONRoot or JSONObjectHolder) when it
    is constructed. This automatically creates a JSON object. You can access methods as you
    would in JavaScript, through the [] operator.
*/
class AbstractJSONReader {
public:
    /** Constructor for the JSON object.
     * @param ctx - A context string to parse
    */
    explicit AbstractJSONReader(std::string ctx);
    /** Default destructor.
     */
    virtual ~AbstractJSONReader() = default;
    /** Returns a JSON object element by key
     * @param key - name of the element you want to access
     * @return - Returns an AbstractJSONObject (Either an Element, or another JSONRoot or JSONObjectHolder)
     */
    virtual AbstractJSONReader& operator[](std::string key) = 0;
    /** Returns a JSON object element by index
     * @param pos - index of the element you want to access
     * @return - Returns an AbstractJSONObject (Either an Element, or another JSONRoot or JSONObjectHolder)
     */
    virtual AbstractJSONReader& operator[](int pos) = 0;
    /**Enables the object to be cast to a string (basically returns a string)
     * @return - the string data in the object.
     */
    virtual explicit operator std::string () const = 0;
    /**Enables the object to be cast to a int (basically returns a int)
     * @return - the int data in the object.
     */
    virtual explicit operator int() const = 0;
    /**Enables the object to be cast to a double (basically returns a double)
     * @return - the double data in the object.
     */
    virtual explicit operator double() const = 0;
protected:
   /**
    * Adds a string context to the object (does the actual parsing)
    * @param ctx - the context to be parsed
    */
    virtual void addContext(std::string ctx) = 0;

};


#endif //COS214PROJECT_ABSTRACTJSONREADER_H
