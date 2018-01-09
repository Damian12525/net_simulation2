#include "PackageQueue.h"



void PackageQueue::view(Package *_package_array) {

}

bool PackageQueue::isEmpty() {
    return _deque.empty();
}

int PackageQueue::size() {
    return _deque.size();
}

QueueType PackageQueue::getQueueType() {
    return IPackageQueue::getQueueType();
}

void PackageQueue::push(Package _package) {
    IPackageQueue::push(_package);
}

void PackageQueue::pop(Package _package) {
    IPackageQueue::pop(_package);
}

PackageQueue::PackageQueue() {}


