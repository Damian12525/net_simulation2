#ifndef NET_SIMULATION_PACKAGE_H
#define NET_SIMULATION_PACKAGE_H


#include "types.h"

class Package {

    ElementID id;
    int packageCounter; //U Kleczka podkreslone ??
public:
    Package();
    Package(ElementID _ID);
    ElementID getId();

};

int Package::packageCounter = 0;

#endif //NET_SIMULATION_PACKAGE_H
