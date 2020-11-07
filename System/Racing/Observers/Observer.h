//
// Created by kyle-pc on 2020/11/07.
//

#ifndef COS214PROJECT_OBSERVER_H
#define COS214PROJECT_OBSERVER_H

class RealRaceTrack;

class Observer {
private:
    RealRaceTrack* subject;
    int event;
public:
    Observer();
    void attach(RealRaceTrack* s);
    virtual ~Observer() = default;
    void notify();
    int getEvent();
};


#endif //COS214PROJECT_OBSERVER_H
