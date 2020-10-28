//
// Created by kyle-pc on 2020/10/28.
//

#include "TeamManager.h"

TeamManager::TeamManager() {
}


TeamManager::~TeamManager() {
    delete receiver;
}


void TeamManager::bind(Receiver *r) {
    receiver = r;
}