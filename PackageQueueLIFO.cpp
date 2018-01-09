#include "PackageQueueLIFO.h"

QueueType PackageQueueLIFO::getQueueType() {
    return QueueType ::LIFO;
}

Package PackageQueueLIFO::pop() {
    Package to_return = _deque.back();
    _deque.pop_back();
    return to_return;
}
