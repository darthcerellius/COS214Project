//
// Created by jeanre on 2020/11/06.
//

#include "WindTunnelTest.h"

bool WindTunnelTest::test(Component * component) {

    if (component->getName()=="chassis"){
        std::cout << "Starting wind tunnel test on the chassis" << std::endl;
        return chassisTest(dynamic_cast<Chassis*>(component));
    }else if(component->getName()=="aerodynamic"){
        std::cout << "Starting wind tunnel test on aerodynamic component" << std::endl;
        return aerodynamicComponentTest(dynamic_cast<AerodynamicsComponent*>(component));
    }
    std::cout << "Cannot perform wind tunnel test on components other that the chassis or aerodynamic components" << std::endl;
    return false;



}

bool WindTunnelTest::chassisTest(Chassis * testingChassis) {
    preTestingState = new ComponentStore();
    preTestingState->setMemento(testingChassis->createMemento());
    double downForce = testingChassis->getDownForce();
    double windResistance = testingChassis->getWindResistance();
    for (int i = 0; i < 500; ++i) {
        double val = log(downForce);
        windResistance += log(windResistance);
        if (val<20 || windResistance>50){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i) << std::endl;
            return false;
        }
    }
    testingChassis->restore(preTestingState->getMemento());
    std::cout << "Wind tunnel test passed, chassis restored to previous state"<< std::endl;
    return true;
}

bool WindTunnelTest::aerodynamicComponentTest(AerodynamicsComponent * aeroComponent)  {
    preTestingState = new ComponentStore();
    preTestingState->setMemento(aeroComponent->createMemento());
    double downForce = aeroComponent->getDownForce();
    double windResistance = aeroComponent->getWindResistance();
    for (int i = 0; i < 500; ++i) {
        double val = log(downForce);
        windResistance += log(windResistance);
        if (val<10 || windResistance>20){
            std::cout << "Wind tunnel test failed at test number : " + to_string(i) << std::endl;
            return false;
        }
    }
    aeroComponent->restore(preTestingState->getMemento());
    std::cout << "Wind tunnel test passed, aerodynamic component restored to previous state"<< std::endl;
    return true;
}
