#ifndef NET_SIMULATION_IPACKAGEQUEUE_H
#define NET_SIMULATION_IPACKAGEQUEUE_H


#include "Package.h"
#include "QueueType.h"
#include "IPackageDepot.h"
#include "PackageQueue.h"

class IPackageQueue : public IPackageDepot
{


public:

    virtual QueueType getQueueType() = 0;
    virtual Package pop() = 0;

    virtual void push(Package to_push) = 0;
    virtual bool isEmpty() = 0;
    virtual int size()= 0;
    virtual std::deque view()= 0;

};


#endif //NET_SIMULATION_IPACKAGEQUEUE_H
