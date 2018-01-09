

#ifndef NET_SIMULATION_WORKER_H
#define NET_SIMULATION_WORKER_H




#include "IPackageQueue.h"
#include "Package.h"
#include "ReceiverType.h"
#include <memory>
#include "types.h"
#include "IPackageReceiver.h"

class Worker : public IPackageReceiver
{
private:
    ElementID workerID;
    TimeOffset processingDuration;
    Time packageProcessingStartTime;
    IPackageQueue* queue;
    std::vector<Package> currentlyProcessedPackage;

public:
    Worker(int ElementID, TimeOffset, IPackageQueue* _packageQueue);
    void doWork();
    TimeOffset getProcessingDuration();
    Time getProcessingStartTime();
    ElementID getId();

    void receivePackage(Package _package);
    Package* viewDepot();
    ReceiverType getReceiverType();

};


#endif //NET_SIMULATION_WORKER_H
