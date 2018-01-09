#include "Storehouse.h"
#include "types.h"

Storehouse::Storehouse(ElementID _id) {

    id = _id;




}



ElementID Storehouse::getId() {
    return id;
}

void Storehouse::receivePackage(Package to_receive) {
    IPackageReceiver::receivePackage(to_receive);
}

Package *Storehouse::viewDepot() {
    return nullptr;
}

ReceiverType Storehouse::getReceiverType() {
    return ReceiverType :: STOREHOUSE;
}
