#ifndef NET_SIMULATION_IPACKAGEQUEUE_H
#define NET_SIMULATION_IPACKAGEQUEUE_H


#include "Package.h"
#include "QueueType.h"
#include "IPackageDepot.h"

class IPackageQueue : public IPackageDepot
{


public:
    virtual void push(Package to_push);

    virtual void pop(Package to_pop);
    bool empty();

    virtual int size();
    std::queue view();
    virtual QueueType getQueueType();


};


#endif //NET_SIMULATION_IPACKAGEQUEUE_H
