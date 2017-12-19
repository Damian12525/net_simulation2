//
// Created by damian on 19.12.17.
//

#include "SpecificTurnsReportNotifier.h"

SpecificTurnsReportNotifier::SpecificTurnsReportNotifier(std::set<Time> _turns) {

}

bool SpecificTurnsReportNotifier::shouldGenerateReport(Time _time) {
    return false;
}
