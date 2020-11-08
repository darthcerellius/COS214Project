//
// Created by kyle-pc on 2020/10/28.
//

#ifndef COS214PROJECT_RACINGCOMMAND_H
#define COS214PROJECT_RACINGCOMMAND_H

#include "Command.h"
#include "../../Racing/RealRaceTrack.h"
#include "../../Racing/Observers/Observer.h"
class PitCrew;

/**
 * @brief Constructs a race track, a Pit Crew team and an Observer. Invokes the race track to simulate a race.
 */
class RacingCommand : public Command {
private:
    RealRaceTrack* track;
    PitCrew* crew;
    Observer* posRecorder;
public:
    RacingCommand();
    ~RacingCommand() override;
    void execute(Car* car) override;

};


#endif //COS214PROJECT_RACINGCOMMAND_H
