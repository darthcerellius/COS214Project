//
// Created by kyle-pc on 2020/11/06.
//

#include "TestingCommand.h"

TestingCommand::TestingCommand(){

}

void TestingCommand::execute(Car *car) {
    map<string,Component*>::iterator it = car->getComponents()->begin();
    for(;it != car->getComponents()->end(); it++){
        if(...){
            test = new SoftwareTest();
            test->test(car->getComponents());
        }
        else{

        }
    }
}