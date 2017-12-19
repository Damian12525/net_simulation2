//
// Created by damian on 19.12.17.
//

#ifndef NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H
#define NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H


#include <set>
#include "Time.h"

class SpecificTurnsReportNotifier {
    std::set<Time> turns;

public:
    SpecificTurnsReportNotifier(std::set<Time> _turns);
    bool shouldGenerateReport(Time _time);

};


#endif //NET_SIMULATION_SPECIFICTURNSREPORTNOTIFIER_H
