#include "Worker.h"

Worker::Worker(int ElementID, TimeOffset, IPackageQueue *_packageQueue) {

}

void Worker::receivePackage(Package _package) {

}

Package *Worker::viewDepot() {
    return nullptr;
}

void Worker::doWork() {

}

TimeOffset Worker::getProcessingDuration() {
    return TimeOffset();
}

Time Worker::getProcessingStartTime() {
    return Time();
}

ReceiverType Worker::getReceiverType() {
    return ReceiverType();
}

int Worker::getId() {
    return 0;
}
