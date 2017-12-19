//
// Created by damian on 19.12.17.
//

#ifndef NET_SIMULATION_INTERVALREPORTNOTIFIER_H
#define NET_SIMULATION_INTERVALREPORTNOTIFIER_H


#include "TimeOffset.h"
#include "Time.h"

class IntervalReportNotifier {
    TimeOffset interval;

public:

    IntervalReportNotifier (TimeOffset _interval);
    bool shouldGenerateReport (Time _time);

};


#endif //NET_SIMULATION_INTERVALREPORTNOTIFIER_H
