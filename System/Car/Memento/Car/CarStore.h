//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARSTORE_H
#define COS214PROJECT_CARSTORE_H
/**
 * @brief Serves as the memento in the car memento design pattern
 *
 * @author Jeanre du Plessis
 * @date 07 Nov 2020
 */
#include "CarCareTaker.h"
class CarStore {
private:
    CarCareTaker* memento; ///stores the caretaker
public:
    CarStore();
    ~CarStore();
    /**
     * sets member object memento to the passed in object
     * @param newMemento a CarCareTaker object used to set the memento member object
     */
    void setMemento(CarCareTaker* newMemento);
    CarCareTaker* getMemento(); ///@return  the caretaker member object
};


#endif //COS214PROJECT_CARSTORE_H
