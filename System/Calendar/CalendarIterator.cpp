//
// Created by janine on 2020/11/02.
//

#include "CalendarIterator.h"
#include "RaceWeekend.h"

CalendarIterator::CalendarIterator(std::vector<RaceWeekend*> weekends){
    this->weekends = weekends;
}

void CalendarIterator::first(){
    index = 0;
}

void CalendarIterator::next(){
    if(index != weekends.size()-1){
        index++;
    }
}

bool CalendarIterator::isDone(){
    return index == weekends.size()-1;
}

RaceWeekend* CalendarIterator::current(){
    return weekends[index];
}