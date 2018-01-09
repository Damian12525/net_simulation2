#ifndef NET_SIMULATION_PACKAGEQUEUELIFO_H
#define NET_SIMULATION_PACKAGEQUEUELIFO_H


#include "PackageQueue.h"
#include "QueueType.h"
#include "Package.h"


class PackageQueueLIFO : private PackageQueue {


public:

    virtual QueueType getQueueType();

    virtual Package pop();

};


#endif //NET_SIMULATION_PACKAGEQUEUELIFO_H
