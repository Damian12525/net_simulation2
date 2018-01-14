#include "SpecificTurnsReportNotifier.h"

//SpecificTurnsReportNotifier::SpecificTurnsReportNotifier(std::set<Time> _turns) {}

SpecificTurnsReportNotifier::SpecificTurnsReportNotifier() {
    turns.insert(1);
    turns.insert(4);
    turns.insert(5);
    //przepraszam za styl, ale nie znalazłem żadnego tutorialu jak inicjalizować std::set
}

bool SpecificTurnsReportNotifier::shouldGenerateReport(Time _time) {
    std::set<Time>::iterator it = turns.find(_time);
    if(it != turns.end())
        return true;
    else
       return false;
}

