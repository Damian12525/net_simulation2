#ifndef NET_SIMULATION_RECEIVERPREFERENCES_H
#define NET_SIMULATION_RECEIVERPREFERENCES_H


#include <map>
#include <vector>
#include "IPackageReceiver.h"

class ReceiverPreferences {

    std::map<IPackageReceiver*,double > probabilities;

public:
    std::map<IPackageReceiver*,double > getProbabilities();
    void setProbabilities (std::map<IPackageReceiver*,double > _probabilities);
    void addReceiver(IPackageReceiver* new_receiver);
    void addReceiverWithProbability(IPackageReceiver* new_receiver, double probability);
    void removeReceiver (IPackageReceiver* to_remove);
    IPackageReceiver* drawReceiver();
    std::vector<std::pair<IPackageReceiver*, double >> view ();


};


#endif //NET_SIMULATION_RECEIVERPREFERENCES_H
