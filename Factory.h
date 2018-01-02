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
    std::vector<Ramp> getRamps();
    void addRamp (Ramp _ramp);
    void removeRamp (ElementID _rampID);

    std::vector<Worker> getWorkers();
    void addWorker(Worker _worker);
    void removeWorker (ElementID _workerID);


    //Usuniecie elementu jest trywialne, ale trzeba sie zajac w tym miejscu "ślepymi połączeniami"
    std::vector<Storehouse> getStorehouses();
    void addStorehouse(Storehouse _storehouse);
    void removeStorehouse (ElementID _storehouseID);




};

#endif //NET_SIMULATION_FACTORY_H
