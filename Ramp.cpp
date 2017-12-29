//
// Created by damian on 19.12.17.
//

#include "Ramp.h"

Ramp::Ramp(int _elementID, TimeOffset _interval) {
    rampID = _elementID;
    deliveryInterval = _interval;

}

void Ramp::deliveryGoods(Time _time) {

}

ElementID Ramp::getId() {
    return rampID;
}

TimeOffset Ramp::getDeliveryInterval() {
    return deliveryInterval;
}
