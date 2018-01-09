#ifndef NET_SIMULATION_PACKAGEQUEUEFIFO_H
#define NET_SIMULATION_PACKAGEQUEUEFIFO_H


#include "QueueType.h"
#include "Package.h"
#include "PackageQueue.h"

class PackageQueueFIFO : private PackageQueue {


    virtual QueueType getQueueType();

    virtual Package pop();

};


#endif //NET_SIMULATION_PACKAGEQUEUEFIFO_H
