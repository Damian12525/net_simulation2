#ifndef NET_SIMULATION_IPACKAGERECEIVER_H
#define NET_SIMULATION_IPACKAGERECEIVER_H


#include "Package.h"
#include "ReceiverType.h"


class IPackageReceiver {

public:
    virtual void receivePackage(Package to_receive) = 0;
    virtual Package* viewDepot() = 0; //Package[]
    virtual ReceiverType getReceiverType() = 0;
    virtual ElementID getId() = 0; //chyba getID odbiorcy (virtual)


};


#endif //NET_SIMULATION_IPACKAGERECEIVER_H
