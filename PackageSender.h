#ifndef NET_SIMULATION_PACKAGESENDER_H
#define NET_SIMULATION_PACKAGESENDER_H


#include <vector>
#include "ReceiverPreferences.h"
#include "Package.h"
#include "ElementID.h"

class PackageSender {
    ReceiverPreferences receiverPreferences;
    std::vector<Package>sendingBuffer;

public:

    PackageSender (ElementID _senderID);
    ReceiverPreferences getReceiverPreferences();
    void setReceiverPrefereneces (ReceiverPreferences _preferences_to_set);
    void sendPackage();
    std::vector<Package> getSendingBuffer();
};


#endif //NET_SIMULATION_PACKAGESENDER_H
