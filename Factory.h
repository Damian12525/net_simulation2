#ifndef NET_SIMULATION_FACTORY_H
#define NET_SIMULATION_FACTORY_H


#include <vector>
#include "Ramp.h"
#include "Worker.h"
#include "Storehouse.h"
#include "ElementID.h"


class Factory {
    std::vector<Ramp> ramps;
    std::vector<Worker> workers;
    std::vector<Storehouse> storehouses;


public:
    Ramp* getRamps();
    void addRamp (Ramp _ramp);
    void removeRamp (ElementID _rampID);

    Worker* getWorkers();
    void addWorker(Worker _worker);
    void removeWorker (ElementID _workerID);

    Storehouse* getStorehouses();
    void addStorehouse(Storehouse _storehouse);
    void removeStorehouse (ElementID _storehouseID);




};

#endif //NET_SIMULATION_FACTORY_H
