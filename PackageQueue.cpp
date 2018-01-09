#include "PackageQueue.h"

PackageQueue::PackageQueue(QueueType _type) {
    _queueType = _type;


}

void PackageQueue::view(Package *_package_array) {

}

bool PackageQueue::isEmpty() {
    return _queue.empty();
}