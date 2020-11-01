#include "InertiaDrift.h"

InertiaDrift::InertiaDrift() {}

InertiaDrift::~InertiaDrift() {}

void InertiaDrift::executeStrategy() {
    std::cout << "The car makes use of the inertia drift technique during the race, appearing to turn right at a left turn just before an abrupt change of direction in which the turn can be taken without losing any speed.\n";
}

GeneralRaceStrategy* InertiaDrift::clone() {
    return new InertiaDrift();
}