#ifndef NET_SIMULATION_PACKAGEQUEUELIFO_H
#define NET_SIMULATION_PACKAGEQUEUELIFO_H


#include "PackageQueue.h"
#include "QueueType.h"


class PackageQueueLIFO : private PackageQueue {


public:

    virtual QueueType getQueueType();

    virtual void pop();

};


#endif //NET_SIMULATION_PACKAGEQUEUELIFO_H
