

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

    virtual void receivePackage(Package _package)= 0;
    virtual Package* viewDepot()= 0;
    virtual ReceiverType getReceiverType()= 0;

};


#endif //NET_SIMULATION_WORKER_H
