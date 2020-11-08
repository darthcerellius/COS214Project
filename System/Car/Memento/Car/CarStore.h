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
    CarCareTaker* memento; /**  Stores the  */
public:
    CarStore();
    ~CarStore();
    void setMemento(CarCareTaker*);
    CarCareTaker* getMemento();
};


#endif //COS214PROJECT_CARSTORE_H
