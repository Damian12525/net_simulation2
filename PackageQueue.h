#ifndef NET_SIMULATION_PACKAGEQUEUE_H
#define NET_SIMULATION_PACKAGEQUEUE_H

#include "IPackageQueue.h"
#include <queue>
#include <functional>
#include "QueueType.h"
#include "Package.h"





class PackageQueue : private IPackageQueue {


protected:

    std::deque<Package> _deque;   // double ended queue
    QueueType queueType;
    std::function<Package()> _popFunction;

public:

    PackageQueue(QueueType _queueType);

    int size();
    bool isEmpty();

    QueueType getQueueType();

    void push(Package _package);
    Package pop();
    std::deque<Package> view();
};


#endif //NET_SIMULATION_PACKAGEQUEUE_H
