#include "IntervalReportNotifier.h"

IntervalReportNotifier::IntervalReportNotifier(TimeOffset _interval) {
    interval = _interval;
}

bool IntervalReportNotifier::shouldGenerateReport(Time _time) {
    if(_time%interval == 0)
        return true;
    else
        return false;
}


