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

template <typename T>
class TransportMethod {
public:
    TransportMethod();
    virtual ~TransportMethod();
    void load(T component);
    T unload(std::string place);

protected:
    T shippingContainer;
    /*puts the pointer into a memento*/
    virtual void package(T component) = 0;
    /*specify how the car is being shipped*/
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
