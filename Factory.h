#ifndef NET_SIMULATION_FACTORY_H
#define NET_SIMULATION_FACTORY_H


#include <list>
#include "Ramp.h"
#include "Worker.h"
#include "Storehouse.h"



class Factory {
    std::list<Ramp> ramps;
    std::list<Worker> workers;
    std::list<Storehouse> storehouses;


public:
    std::list<Ramp> getRamps();
    void addRamp (Ramp _ramp);
    void removeRamp (ElementID _rampID);

    std::list<Worker> getWorkers();
    void addWorker(Worker _worker);
    void removeWorker (ElementID _workerID);


    //Usuniecie elementu jest trywialne, ale trzeba sie zajac w tym miejscu "ślepymi połączeniami"
    std::list<Storehouse> getStorehouses();
    void addStorehouse(Storehouse _storehouse);
    void removeStorehouse (ElementID _storehouseID);

    //Coby latwiej sie zylo

    Worker& getWorker(ElementID _id);




};

#endif //NET_SIMULATION_FACTORY_H
