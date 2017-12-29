#ifndef NET_SIMULATION_IPACKAGEQUEUE_H
#define NET_SIMULATION_IPACKAGEQUEUE_H


#include "Package.h"
#include "QueueType.h"

class IPackageQueue {


public:
    void push(Package to_push);
    void pop(Package to_pop);
    bool empty();
    int size(); //int?
    Package* view(); //w schemacie od Kleczka Package[]
    QueueType getQueueType();


};


#endif //NET_SIMULATION_IPACKAGEQUEUE_H
