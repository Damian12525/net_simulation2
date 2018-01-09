#include "PackageQueueFIFO.h"

QueueType PackageQueueFIFO::getQueueType() {
    return QueueType ::FIFO;
}

Package PackageQueueFIFO::pop() {
    Package to_return = _deque.front();
    _deque.pop_front();
    return to_return;


}
