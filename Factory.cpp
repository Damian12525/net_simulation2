#include "Factory.h"

std::list<Ramp> Factory::getRamps() {
    return ramps;
}

void Factory::addRamp(Ramp _ramp) {
    ramps.push_back(_ramp);
}



std::list<Worker> Factory::getWorkers() {
    return workers;
}

void Factory::addWorker(Worker _worker) {
    workers.push_back(_worker);
}



std::list<Storehouse> Factory::getStorehouses() {
    return storehouses;
}

void Factory::addStorehouse(Storehouse _storehouse) {
    storehouses.push_back(_storehouse);
}

void Factory::removeStorehouse(ElementID _storehouseID) {

}

void Factory::removeWorker(ElementID _workerID) {

}

void Factory::removeRamp(ElementID _rampID) {

}


