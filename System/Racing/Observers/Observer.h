//
// Created by kyle-pc on 2020/11/07.
//

#ifndef COS214PROJECT_OBSERVER_H
#define COS214PROJECT_OBSERVER_H

class RealRaceTrack;

/**
 * @brief Observes the RealRaceTrack position and records it when notified of a position change.
 *
 * The RacingCommand uses this object to read the state of the race track after a qualifying or real race
 * occurs.
 */
class Observer {
private:
    RealRaceTrack* subject;
    int event;
public:
    /**
     * Default constructor
     */
    Observer();
    /**
     * Attaches a race track to this object.
     * @param s - The race track to observe.
     */
    void attach(RealRaceTrack* s);
    virtual ~Observer() = default;
    /**
     * Used by the RealRaceTrack object to notify this class of any changes.
     */
    void notify();
    /**
     * Returns the data observed.
     * @return  - The position the car came in.
     */
    int getEvent();
};


#endif //COS214PROJECT_OBSERVER_H
