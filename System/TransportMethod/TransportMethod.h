//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_TRANSPORTMETHOD_H
#define COS214PROJECT_TRANSPORTMETHOD_H

enum TransportType {
    AIR,
    SEA,
    ROAD
};

class TransportMethod {
public:
    static TransportMethod* createTransportMethod(TransportType type);
    TransportMethod();
    virtual ~TransportMethod();
};


#endif //COS214PROJECT_TRANSPORTMETHOD_H
