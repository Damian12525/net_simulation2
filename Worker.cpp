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
    return processingDuration;
}

Time Worker::getProcessingStartTime() {
    return packageProcessingStartTime;
}

ReceiverType Worker::getReceiverType() {
    return nullptr;
}

ElementID Worker::getId() {
    return workerID;
}
