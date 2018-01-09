#ifndef NET_SIMULATION_PACKAGEQUEUE_H
#define NET_SIMULATION_PACKAGEQUEUE_H

#include <queue>
#include <functional>
#include "QueueType.h"
#include "IPackageQueue.h"
#include "Package.h"


class PackageQueue : public IPackageQueue {

    std::deque<Package> _deque;   // double ended queue
    QueueType queueType;
    std::function<Package()> _popFunction;

public:

    explicit PackageQueue(QueueType _queueType);

    int size() override;
    bool isEmpty();

    QueueType getQueueType();

    void push(Package _package);
    Package pop();
    std::deque<Package> view();
};


#endif //NET_SIMULATION_PACKAGEQUEUE_H
