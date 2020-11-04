//
// Created by kyle-pc on 2020/11/04.
//

#include "Command.h"

void Command::addSuccessor(Command *succ) {
    successor = succ;
}
