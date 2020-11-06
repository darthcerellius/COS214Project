//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_TEAMMANAGERBUILDER_H
#define COS214PROJECT_TEAMMANAGERBUILDER_H

class Command;

class TeamManagerBuilder {
public:
    TeamManagerBuilder() = default;
    virtual ~TeamManagerBuilder() = default;
    virtual Command* buildCommandChain() = 0;
};


#endif //COS214PROJECT_TEAMMANAGERBUILDER_H
