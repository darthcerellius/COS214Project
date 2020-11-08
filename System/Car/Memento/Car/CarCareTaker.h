//
// Created by jeanre on 2020/11/02.
//

#ifndef COS214PROJECT_CARCARETAKER_H
#define COS214PROJECT_CARCARETAKER_H
/**
 * @brief Serves as the memento in the car memento design pattern
 *
 * @author Jeanre du Plessis
 * @date 07 Nov 2020
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
    CarMemento* getMemento(); ///@return  the caretaker member object
};


#endif //COS214PROJECT_CARCARETAKER_H
