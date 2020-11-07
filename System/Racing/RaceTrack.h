//
// Created by kyle-pc on 2020/11/04.
//

#ifndef COS214PROJECT_RACETRACK_H
#define COS214PROJECT_RACETRACK_H

class RaceTrack {
public:
    RaceTrack() = default;
    virtual ~RaceTrack() = default;
    virtual int getLaps() = 0;
};


#endif //COS214PROJECT_RACETRACK_H
