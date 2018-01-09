#ifndef NET_SIMULATION_RAMP_H
#define NET_SIMULATION_RAMP_H


#include "types.h"

class Ramp {
    ElementID rampID;
    TimeOffset deliveryInterval;

public:

    Ramp (int _elementID, TimeOffset _interval);
    void deliveryGoods (Time _time);
    TimeOffset getDeliveryInterval();
    ElementID getId();




};


#endif //NET_SIMULATION_RAMP_H
