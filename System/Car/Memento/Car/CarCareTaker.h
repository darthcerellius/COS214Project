//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARCARETAKER_H
#define COS214PROJECT_CARCARETAKER_H
/**
 * @brief Serves as the caretaker in the car memento design pattern
 *
 */
#include "CarMemento.h"
class CarCareTaker {
private:
    CarMemento* memento; ///stores the caretaker
public:
    CarCareTaker();
    ~CarCareTaker();
    /**
     * sets member object memento to the passed in object
     * @param newMemento a CarMemento object used to set the memento member object
     */
    void setMemento(CarMemento* newMemento);
    /**
     *
     *
     * @return the caretaker member object
     */
    CarMemento* getMemento();
};


#endif //COS214PROJECT_CARCARETAKER_H
