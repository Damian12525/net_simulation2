#ifndef NET_SIMULATION_INTERVALREPORTNOTIFIER_H
#define NET_SIMULATION_INTERVALREPORTNOTIFIER_H


#include "types.h"
#include "IReportNotifier.h"

class IntervalReportNotifier : public IReportNotifier{
    TimeOffset interval;

public:

    IntervalReportNotifier (TimeOffset _interval);


    bool shouldGenerateReport (Time _time);

};


#endif //NET_SIMULATION_INTERVALREPORTNOTIFIER_H
