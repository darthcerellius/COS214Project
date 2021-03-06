//
// Created by Marco on 01/11/2020.
//

#include "TacticalDecision.h"

TacticalDecision::TacticalDecision(Car* senTo, string decision) : Instruction() {
    this->sentTo = senTo;
    this->decision = decision;
}

TacticalDecision::~TacticalDecision() {}

void TacticalDecision::executeInstruction() {
    if(sentTo && !decision.empty())
        sentTo->makeTacticalDecision(decision);
    else
        std::cout << "DEBUG: Cannot make tactical decision since the receiver or the decision is null/not defined in TacticalDecision command.\n";
}