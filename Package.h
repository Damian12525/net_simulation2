#ifndef NET_SIMULATION_PACKAGE_H
#define NET_SIMULATION_PACKAGE_H


#include "types.h"

class Package {

    ElementID id;
    static int packageCounter; //U Kleczka podkreslone ??
public:
    Package();

    explicit Package(ElementID _ID);
    ElementID getId();

};

//int Package::packageCounter = 0;

#endif //NET_SIMULATION_PACKAGE_H
