#include "PackageQueue.h"





bool PackageQueue::isEmpty() {
    return _deque.empty();
}

int PackageQueue::size() {
    return int(_deque.size());
}


void PackageQueue::push(Package _package) {
    _deque.push_back(_package);
}


PackageQueue::PackageQueue() {}


