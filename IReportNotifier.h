#ifndef NET_SIMULATION_IREPORTNOTIFIER_H
#define NET_SIMULATION_IREPORTNOTIFIER_H



#include "types.h"

class IReportNotifier {

public:
    virtual bool shouldGenerateReport(Time);


};


#endif //NET_SIMULATION_IREPORTNOTIFIER_H
