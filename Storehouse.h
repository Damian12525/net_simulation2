#ifndef NET_SIMULATION_STOREHOUSE_H
#define NET_SIMULATION_STOREHOUSE_H



#include "IPackageDepot.h"
#include "Package.h"
#include "types.h"
#include "IPackageReceiver.h"

class Storehouse : public IPackageReceiver {

    ElementID id;
    IPackageDepot* depot;

public:
    Storehouse(ElementID _id);
    ElementID getId();

    virtual void receivePackage(Package to_receive)= 0;

    virtual Package* viewDepot()= 0;

};


#endif //NET_SIMULATION_STOREHOUSE_H
