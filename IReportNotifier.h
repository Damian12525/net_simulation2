#ifndef NET_SIMULATION_IREPORTNOTIFIER_H
#define NET_SIMULATION_IREPORTNOTIFIER_H


#include "Time.h"

class IReportNotifier {

public:
    bool shouldGenerateReport(Time);


};


#endif //NET_SIMULATION_IREPORTNOTIFIER_H
