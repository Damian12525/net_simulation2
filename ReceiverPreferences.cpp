//
// Created by damian on 19.12.17.
//

#include "ReceiverPreferences.h"

std::map<IPackageReceiver *, double> ReceiverPreferences::getProbabilities() {
    return std::map<IPackageReceiver *, double>();
}

void ReceiverPreferences::setProbabilities(std::map<IPackageReceiver *, double>) {

}

void ReceiverPreferences::addReceiver(IPackageReceiver *new_receiver) {

}

void ReceiverPreferences::addReceiverWithProbability(IPackageReceiver *new_receiver, double probability) {

}

void ReceiverPreferences::removeReceiver(IPackageReceiver *) {

}

IPackageReceiver *ReceiverPreferences::drawReceiver() {
    return nullptr;
}

std::pair<IPackageReceiver *, double> *ReceiverPreferences::view() {
    return nullptr;
}
