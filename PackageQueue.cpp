#include "PackageQueue.h"

PackageQueue::PackageQueue(QueueType _type) {
    _queueType = _type;


}

void PackageQueue::push(Package _package) {

}

void PackageQueue::pop(Package _package) {

}

void PackageQueue::view(Package *_package_array) {

}

QueueType PackageQueue::getQueueType() {

    return _queueType;
}

bool PackageQueue::isEmpty() {
    return _queue.empty();
}

int PackageQueue::size() {
    return _queue.size();
}
