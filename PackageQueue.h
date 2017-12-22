#ifndef NET_SIMULATION_PACKAGEQUEUE_H
#define NET_SIMULATION_PACKAGEQUEUE_H


#include <queue>
#include <functional>
#include "QueueType.h"
#include "Package.h"

class PackageQueue {


    QueueType _queueType;
    std::queue _queue;
    std::function<Package()> _popFunction;

    PackageQueue (QueueType _type);
    void push(Package _package);
    void pop(Package _package);
    void view(Package* _package_array);
    QueueType getQueueType();
    bool isEmpty();

};


#endif //NET_SIMULATION_PACKAGEQUEUE_H
