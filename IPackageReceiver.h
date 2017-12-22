#ifndef NET_SIMULATION_IPACKAGERECEIVER_H
#define NET_SIMULATION_IPACKAGERECEIVER_H


#include "Package.h"
#include "ReceiverType.h"
#include "ElementID.h"

class IPackageReceiver {

public:
    void receivePackage(Package to_receive);
    Package* viewDepot(); //Package[]
    ReceiverType getReceiverType();
    ElementID getID();


};


#endif //NET_SIMULATION_IPACKAGERECEIVER_H
