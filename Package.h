#ifndef NET_SIMULATION_PACKAGE_H
#define NET_SIMULATION_PACKAGE_H


#include "ElementID.h"

class Package {
    ElementID id;
    ElementID packageCounter; //U Kleczka podkreslone ??
public:
    Package();
    Package(ElementID _ID);
    ElementID getId();

};


#endif //NET_SIMULATION_PACKAGE_H
