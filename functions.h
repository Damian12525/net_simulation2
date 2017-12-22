#ifndef NET_SIMULATION_FUNCTIONS_H
#define NET_SIMULATION_FUNCTIONS_H

#include <functional>
#include "Factory.h"


void simulate(Factory _factory, std::function<void (Factory&, TimeOffset)>);

void generateStructureReport( Factory _factory, std::ostream & out);

#endif //NET_SIMULATION_FUNCTIONS_H
