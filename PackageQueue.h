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

    PackageQueue (QueueType _type);

    PackageQueue();

    int size();


    void view(Package* _package_array);
    bool isEmpty();

    virtual QueueType getQueueType() = 0;

    void push(Package _package);
    virtual void pop(Package _package) = 0;
};


#endif //NET_SIMULATION_PACKAGEQUEUE_H
