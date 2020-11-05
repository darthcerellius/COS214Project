#include "ConservativeStart.h"

ConservativeStart::ConservativeStart() {}

ConservativeStart::~ConservativeStart() {}

void ConservativeStart::executeStrategy() {
    std::cout << "STRATEGY: The car starts the race conservatively, allowing the opponents to recklessly wear themselves out in the early race, before it builds momentum and speeds up near the end of the race.\n";
}

GeneralRaceStrategy* ConservativeStart::clone() {
    return new ConservativeStart();
}