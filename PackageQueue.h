#ifndef NET_SIMULATION_PACKAGEQUEUE_H
#define NET_SIMULATION_PACKAGEQUEUE_H


#include <queue>
#include <functional>
#include "QueueType.h"
#include "Package.h"
#include "IPackageQueue.h"

class PackageQueue : private IPackageQueue {


protected:

    std::deque _deque;   // double ended queue

    //std::function<Package()> _popFunction;

public:



    int size();
    bool isEmpty();

    virtual QueueType getQueueType() = 0;

    void push(Package _package);
    virtual Package pop() = 0;
    virtual std::deque view();
};


#endif //NET_SIMULATION_PACKAGEQUEUE_H
