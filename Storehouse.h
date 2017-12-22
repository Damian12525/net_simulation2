#ifndef NET_SIMULATION_STOREHOUSE_H
#define NET_SIMULATION_STOREHOUSE_H


#include "ElementID.h"
#include "IPackageDepot.h"
#include "Package.h"

class Storehouse {

    ElementID id;
    IPackageDepot* depot;

    Storehouse(ElementID _id);
    void receivePackage(Package to_receive);
    Package* viewDepot();
    ElementID getId();


};


#endif //NET_SIMULATION_STOREHOUSE_H
