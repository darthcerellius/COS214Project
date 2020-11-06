//
// Created by jeanre on 2020/11/06.
//

#ifndef COS214PROJECT_TESTING_H
#define COS214PROJECT_TESTING_H

#include "../Car/Component.h"
#include "../Memento/Component/ComponentState.h"
#include "../Memento/Component/ComponentCareTaker.h"
#include "../Memento/Component/ComponentStore.h"
class Testing {
protected:
    virtual bool test(Component*) =0;
    ComponentStore* preTestingState;
public:
    Testing();
    ~Testing();

};


#endif //COS214PROJECT_TESTING_H
