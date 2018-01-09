#ifndef NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H
#define NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H


#include <set>
#include "types.h"
#include "IReportNotifier.h"

class SpecificTurnsReportNotifier : public IReportNotifier{
    std::set<Time> turns;

public:
    SpecificTurnsReportNotifier(std::set<Time> _turns);

    bool shouldGenerateReport(Time _time) override;

};


#endif //NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H
