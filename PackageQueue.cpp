#include "PackageQueue.h"


PackageQueue::PackageQueue(QueueType _queueType) : queueType(_queueType) {

    if (_queueType == QueueType::FIFO)
    {
        _popFunction = [this]()
        {
            Package to_return = _deque.front();
            _deque.pop_front();
            return to_return;

        };
    }
    else
    {
        _popFunction = [this]()
        {
            Package to_return = _deque.back();
            _deque.pop_back();
            return to_return;

        };


    }

}






bool PackageQueue::isEmpty() {
    return _deque.empty();
}

int PackageQueue::size() {
    return int(_deque.size());
}


void PackageQueue::push(Package _package) {
    _deque.push_back(_package);
}

std::deque PackageQueue::view() {
    return _deque;
}

QueueType PackageQueue::getQueueType() {
    return queueType;
}











