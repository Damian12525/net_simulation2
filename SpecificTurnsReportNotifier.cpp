#include "SpecificTurnsReportNotifier.h"

//SpecificTurnsReportNotifier::SpecificTurnsReportNotifier(std::set<Time> _turns) {}



bool SpecificTurnsReportNotifier::shouldGenerateReport(Time _time) {
    std::set<Time>::iterator it = turns.find(_time);
    if(it != turns.end())
        return true;
    else
       return false;
}

SpecificTurnsReportNotifier::SpecificTurnsReportNotifier(std::set<Time> _turns) {
    turns = _turns;

}

