//
// Created by jeanre on 2020/11/06.
//

#ifndef COS214PROJECT_TESTING_H
#define COS214PROJECT_TESTING_H
/**
 * @brief serves as the base class for the testing classes (WindTunnelTest and SoftwareTest)
 */
#include "../Car/Component.h"
#include "../Car/Memento/Component/ComponentState.h"
#include "../Car/Memento/Component/ComponentMemento.h"
#include "../Car/Memento/Component/ComponentCareTaker.h"
class Testing {
public:
    Testing();
    ~Testing();
    virtual bool test(Component*)=0;
};


#endif //COS214PROJECT_TESTING_H
