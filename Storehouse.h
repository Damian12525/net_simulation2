#ifndef NET_SIMULATION_STOREHOUSE_H
#define NET_SIMULATION_STOREHOUSE_H



#include "IPackageDepot.h"
#include "Package.h"
#include "types.h"

class Storehouse {

    ElementID id;
    IPackageDepot* depot;

public:
    Storehouse(ElementID _id);
    void receivePackage(Package to_receive);
    Package* viewDepot();
    ElementID getId();


};


#endif //NET_SIMULATION_STOREHOUSE_H
