#include "IPackageReceiver.h"

void IPackageReceiver::receivePackage(Package to_receive) {

}

Package *IPackageReceiver::viewDepot() {
    return nullptr;
}

ReceiverType IPackageReceiver::getReceiverType() {
    return ReceiverType();
}

ElementID IPackageReceiver::getID() {
    return ElementID();
}
