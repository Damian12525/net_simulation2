#include "PackageSender.h"


PackageSender::PackageSender(ElementID _senderID) {



}

ReceiverPreferences& PackageSender::getReceiverPreferences() {
    return receiverPreferences;
}

void PackageSender::setReceiverPrefereneces(ReceiverPreferences _preferences_to_set) {
    receiverPreferences = _preferences_to_set;

}

void PackageSender::sendPackage() {

    IPackageReceiver* pointerToReceiver = ReceiverPreferences.drawReceiver();

    if(sendingBuffer.empty() == 0)
    {
        pointerToReceiver->receivePackage(sendingBuffer.pop_back());
    }

}

std::vector<Package> PackageSender::getSendingBuffer() {
    return sendingBuffer;
}




