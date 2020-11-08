//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_TRANSPORTMETHOD_H
#define COS214PROJECT_TRANSPORTMETHOD_H

#include <string>

enum TransportType {
    AIR,
    SEA,
    ROAD
};

/**
 * @brief Template class for the transport methods.
 *
 * This class has one load function that uses the package and ship functions implemented by the
 * children
 * @tparam T - Class type to be transported
 */
template <typename T>
class TransportMethod {
public:
    /**
     * Default constructor
     */
    TransportMethod();

    /**
     * Virtual destructor
     */
    virtual ~TransportMethod();
    /**
     * Loads the component by calling the protected children methods
     * @param component - the component to transport
     */
    void load(T component);
    T unload(std::string place);

protected:
    T shippingContainer;
    /**
     * Packages the component
     * @param component
     */
    virtual void package(T component) = 0;
    /**
     * Ships the component.
     */
    virtual void ship() = 0;
    /*Brings the pointer out of the memento*/
    virtual T unpackage(std::string place) = 0;
};

//
// Created by kyle-pc on 2020/11/02.
//

template <typename T>
TransportMethod<T>::TransportMethod() {

}

template <typename T>
TransportMethod<T>::~TransportMethod() {

}

template <typename T>
void TransportMethod<T>::load(T component) {
    package(component);
    ship();
}

template <typename T>
T TransportMethod<T>::unload(std::string place) {
    return unpackage(place);
}



#endif //COS214PROJECT_TRANSPORTMETHOD_H
