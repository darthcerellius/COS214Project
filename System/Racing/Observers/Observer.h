//
// Created by kyle-pc on 2020/11/07.
//

#ifndef COS214PROJECT_OBSERVER_H
#define COS214PROJECT_OBSERVER_H

class RaceTrack;

class Observer {
private:
    RaceTrack* subject;
    int event;
public:
    Observer();
    void attach(RaceTrack* s);S
    virtual ~Observer() = default;
    void notify();
    int getEvent();
};


#endif //COS214PROJECT_OBSERVER_H
