//
// Created by damian on 19.12.17.
//

#ifndef NET_SIMULATION_RAMP_H
#define NET_SIMULATION_RAMP_H


#include "TimeOffset.h"
#include "Time.h"
#include "ElementID.h"

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
