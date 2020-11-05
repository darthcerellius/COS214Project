//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_COMMAND_H
#define COS214PROJECT_COMMAND_H

class Car;

class Command {
protected:
    Command* successor;
public:
    void addSuccessor(Command* succ);
    virtual void execute(Car* car) = 0;

};


#endif //COS214PROJECT_COMMAND_H