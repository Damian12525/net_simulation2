

#ifndef NET_SIMULATION_WORKER_H
#define NET_SIMULATION_WORKER_H




#include "IPackageQueue.h"
#include "ReceiverType.h"
#include <memory>
#include "types.h"
#include "IPackageReceiver.h"
#include "PackageSender.h"

class Worker : public IPackageReceiver, private PackageSender
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
    ElementID getId() override;

    void receivePackage(Package _package) override;
    Package* viewDepot() override;
    ReceiverType getReceiverType() override;

};


#endif //NET_SIMULATION_WORKER_H
