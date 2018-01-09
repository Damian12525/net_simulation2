#ifndef NET_SIMULATION_IPACKAGERECEIVER_H
#define NET_SIMULATION_IPACKAGERECEIVER_H


#include "Package.h"
#include "ReceiverType.h"
#include "ElementID.h"

class IPackageReceiver {

public:
    virtual void receivePackage(Package to_receive);

    virtual Package* viewDepot(); //Package[]
    virtual ReceiverType getReceiverType();
    ElementID getID();


};


#endif //NET_SIMULATION_IPACKAGERECEIVER_H
