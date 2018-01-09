#ifndef NET_SIMULATION_PACKAGEQUEUE_H
#define NET_SIMULATION_PACKAGEQUEUE_H


#include <queue>
#include <functional>
#include "QueueType.h"
#include "Package.h"
#include "IPackageQueue.h"

class PackageQueue : public IPackageQueue {


    QueueType _queueType;
    std::deque _deque;   // double ended queue
    std::function<Package()> _popFunction;

    PackageQueue (QueueType _type);
    void view(Package* _package_array);
    bool isEmpty();

    virtual QueueType getQueueType()= 0;
    virtual int size()= 0;
    virtual void push(Package _package)= 0;
    virtual void pop(Package _package)= 0;
};


#endif //NET_SIMULATION_PACKAGEQUEUE_H
