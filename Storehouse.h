#ifndef NET_SIMULATION_STOREHOUSE_H
#define NET_SIMULATION_STOREHOUSE_H



#include <memory>
#include "types.h"
#include "IPackageReceiver.h"
#include "IPackageDepot.h"

class Storehouse : public IPackageReceiver {

    ElementID id;
    IPackageDepot *depot;
    //std::unique_ptr<IPackageDepot> depot;


public:
    explicit Storehouse(ElementID _id);
    ElementID getId() override;

    void receivePackage(Package packageToReceive) override;

    Package* viewDepot() override;
    ReceiverType getReceiverType() override;

};


#endif //NET_SIMULATION_STOREHOUSE_H
