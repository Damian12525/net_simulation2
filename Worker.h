

#ifndef NET_SIMULATION_WORKER_H
#define NET_SIMULATION_WORKER_H


#include "TimeOffset.h"
#include "Time.h"
#include "IPackageQueue.h"
#include "Package.h"
#include "ReceiverType.h"
#include "ElementID.h"

class Worker
{
private:
    ElementID workerID;
    int processingTime;
    enum class queueType{LIFO, FIFO};
public:

    TimeOffset processingDuration;
    Time packageProcessingStartTime;
    IPackageQueue* queue;
public:
    Worker(int ElementID, TimeOffset, IPackageQueue* _packageQueue);
    void receivePackage(Package _package);
    Package* viewDepot();
    void doWork();
    TimeOffset getProcessingDuration();
    Time getProcessingStartTime();
    ReceiverType getReceiverType();
    ElementID getId();


};


#endif //NET_SIMULATION_WORKER_H
