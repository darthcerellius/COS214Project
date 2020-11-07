//
// Created by kyle-pc on 2020/11/06.
//

#include "TestingCommand.h"

TestingCommand::TestingCommand(){

}

void TestingCommand::execute(Car *car) {
  car->softwareTest();
}