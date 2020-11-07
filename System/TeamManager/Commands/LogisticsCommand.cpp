//
// Created by kyle-pc on 2020/10/28.
//

#include "LogisticsCommand.h"

LogisticsCommand::LogisticsCommand() {
    transport = new AirTransport();
}

LogisticsCommand::~LogisticsCommand() {
    delete transport;
}

void LogisticsCommand::execute(Car *c) {
    transport->package(c);
    transport->ship();
    if (successor != nullptr) {
        successor->execute(c);
    }
}
