//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_MANAGER_H
#define COS214PROJECT_MANAGER_H

#include <iostream>

class Receiver;
class Calendar;

class Manager {
private:
    Manager* successor;
public:
    Manager();
    virtual ~Manager();
    virtual void bind(Receiver* r) = 0;
    virtual void addManager(Manager* newManager);
    virtual void execute(Calendar* calendar) = 0;
};


#endif //COS214PROJECT_MANAGER_H
