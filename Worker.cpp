#include "Worker.h"

Worker::Worker(int ElementID, TimeOffset, IPackageQueue *_packageQueue) {

}


void Worker::doWork() {

    if(currentlyProcessedPackage.empty() == 1)
    {
        //pobranie paczki do aktualnie przetwarzanej
        currentlyProcessedPackage.push_back(queue.pop());

        //TRZEBA ZMIENIĆ (globalTime = obecny czas symulacji)
        packageProcessingStartTime = globalTime;

        return;
    }

    if(globalTime - packageProcessingStartTime >= processingDuration)
    {
        currentlyProcessedPackage.pop_back();
        sendPackage();
    }

}

TimeOffset Worker::getProcessingDuration() {
    return processingDuration;
}

Time Worker::getProcessingStartTime() {
    return packageProcessingStartTime;
}



ElementID Worker::getId() {
    return workerID;
}

void Worker::receivePackage(Package _package) {

    queue.push_back(_package);
}

Package *Worker::viewDepot() {

}

ReceiverType Worker::getReceiverType() {
    return ReceiverType ::WORKER;
}
