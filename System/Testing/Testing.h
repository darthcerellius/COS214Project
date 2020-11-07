//
// Created by jeanre on 2020/11/06.
//

#ifndef COS214PROJECT_TESTING_H
#define COS214PROJECT_TESTING_H

#include "../Car/Component.h"
#include "../Car/Memento/Component/ComponentState.h"
#include "../Car/Memento/Component/ComponentCareTaker.h"
#include "../Car/Memento/Component/ComponentStore.h"
class Testing {
protected:
    ComponentStore* preTestingState;
public:
    Testing();
    ~Testing();
    virtual bool test(Component*)=0;

};


#endif //COS214PROJECT_TESTING_H
