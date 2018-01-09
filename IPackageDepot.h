#ifndef NET_SIMULATION_IPACKAGEDEPOT_H
#define NET_SIMULATION_IPACKAGEDEPOT_H


#include <queue>
#include "Package.h"
#include "IPackageQueue.h"

class IPackageDepot{


public:
    IPackageDepot() = default;

    virtual void push(Package _package)=0;

    virtual bool empty() = 0;

    virtual int size()= 0;

//    virtual std::deque view();

};


#endif //NET_SIMULATION_IPACKAGEDEPOT_H
