//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_TEAMMANAGER_H
#define COS214PROJECT_TEAMMANAGER_H

#include "Manager.h"

class TeamManager : public Manager{
private:
    Receiver* receiver;
public:
    TeamManager();
    virtual ~TeamManager() override;
    void bind(Receiver* r) override;
};


#endif //COS214PROJECT_TEAMMANAGER_H
