//
// Created by damian on 19.12.17.
//

#ifndef NET_SIMULATION_RECEIVERPREFERENCES_H
#define NET_SIMULATION_RECEIVERPREFERENCES_H


#include <map>
#include "IPackageReceiver.h"

class ReceiverPreferences {

    std::map<IPackageReceiver*,double > probabilities;

public:
    std::map<IPackageReceiver*,double > getProbabilities();
    void setProbabilities (std::map<IPackageReceiver*,double >);
    void addReceiver(IPackageReceiver* new_receiver);
    void addReceiverWithProbability(IPackageReceiver* new_receiver, double probability);
    void removeReceiver (IPackageReceiver*);
    IPackageReceiver* drawReceiver();
    std::pair<IPackageReceiver*, double >* view ();


};


#endif //NET_SIMULATION_RECEIVERPREFERENCES_H
