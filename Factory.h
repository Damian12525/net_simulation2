

#ifndef NET_SIMULATION_FACTORY_H
#define NET_SIMULATION_FACTORY_H


#include <vector>
#include "Ramp.h"
#include "Worker.h"
#include "Storehouse.h"


class Factory {
    std::vector<Ramp> ramps;
    std::vector<Worker> workers;
    std::vector<Storehouse> storehouses;


public:
    Ramp* getRamps();
    void addRamp (Ramp _ramp);
    void removeRamp (int ElementID);

    Worker* getWorkers();
    void addWorker(Worker _worker);
    void removeWorker (int ElementID);

    Storehouse* getStorehouses();
    void addStorehouse(Storehouse _storehouse);
    void removeStorehouse (int ElementID);




};

#endif //NET_SIMULATION_FACTORY_H
