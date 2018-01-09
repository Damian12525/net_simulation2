#ifndef NET_SIMULATION_IPACKAGEDEPOT_H
#define NET_SIMULATION_IPACKAGEDEPOT_H


#include <queue>
#include "Package.h"

class IPackageDepot {

    void push(Package _package);
    bool empty();
    int size();
    std::deque view();

};


#endif //NET_SIMULATION_IPACKAGEDEPOT_H
