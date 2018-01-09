#ifndef NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H
#define NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H


#include <set>
#include "types.h"
#include "IReportNotifier.h"

class SpecificTurnsReportNotifier : public IReportNotifier{
    std::set<Time> turns;

public:
    SpecificTurnsReportNotifier(std::set<Time> _turns);

    virtual bool shouldGenerateReport(Time _time)= 0;

};


#endif //NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H
