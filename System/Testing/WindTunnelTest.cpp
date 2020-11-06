//
// Created by jeanre on 2020/11/06.
//

#include "WindTunnelTest.h"

bool WindTunnelTest::test(Component * component) {

    if (component->getName()!="chassis" || component->getName()!="aerodynamic"){
        std::cout << "Cannot perform wintunnel test on components other that the chassis or aerodynamic components" << std::endl;
        return false;
    }else{
        if (component->getName()=="chassis"){
            return chassisTest(dynamic_cast<Chassis*>(component));
        }else{
            return aerodynamicComponentTest(dynamic_cast<AerodynamicsComponent*>(component));
        }
    }
}

bool WindTunnelTest::chassisTest(Chassis * testingChassis) {
    preTestingState = new ComponentStore();
    preTestingState->setMemento(testingChassis->createMemento());
    double downForce = testingChassis->getDownForce();
    double windResistance = testingChassis->getWindResistance();
    for (int i = 0; i < 500; ++i) {
        if (){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i) << std::endl;
            return false;
        }
    }
    std::cout << "Wind tunnel test passed"<< std::endl;
    return true;
}

bool WindTunnelTest::aerodynamicComponentTest(AerodynamicsComponent * aeroComponent)  {
    preTestingState = new ComponentStore();
    preTestingState->setMemento(aeroComponent->createMemento());
    double downForce = aeroComponent->getDownForce();
    double windResistance = aeroComponent->getWindResistance();
    for (int i = 0; i < 500; ++i) {
        if (){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i) << std::endl;
            return false;
        }
    }
    std::cout << "Wind tunnel test passed"<< std::endl;
    return true;
}
