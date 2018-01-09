#ifndef NET_SIMULATION_PACKAGEQUEUEFIFO_H
#define NET_SIMULATION_PACKAGEQUEUEFIFO_H


#include "QueueType.h"

class PackageQueueFIFO {


    virtual QueueType getQueueType();

    virtual void pop();

};


#endif //NET_SIMULATION_PACKAGEQUEUEFIFO_H
