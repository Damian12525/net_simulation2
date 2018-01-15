#include "ReceiverPreferences.h"
#include <random>
#include <time.h>

std::map<IPackageReceiver *, double> ReceiverPreferences::getProbabilities() {
    return probabilities;
}

void ReceiverPreferences::setProbabilities(std::map<IPackageReceiver *, double> _probabilities) {
    probabilities = _probabilities;

}

void ReceiverPreferences::addReceiver(IPackageReceiver *new_receiver) {


    double new_probability = 1 / (probabilities.size() + 1);

    std::map<IPackageReceiver*, double>::iterator it;
    for (it = probabilities.begin(); it != probabilities.end(); it++)
    {
        it->second = new_probability;
    }

}

void ReceiverPreferences::addReceiverWithProbability(IPackageReceiver *new_receiver, double probability) {


    std::map<IPackageReceiver*, double>::iterator it;
    for (it = probabilities.begin(); it != probabilities.end(); it++)
    {
        it->second = (1 - probability)* (it->second);
    }
    probabilities.insert(std::make_pair(new_receiver, probability));

    //Nie sprawdzam czy istnieje juz taki PackageReceiver


}

void ReceiverPreferences::removeReceiver(IPackageReceiver * to_remove) {

    double removed_probability =  probabilities[to_remove];

    if (probabilities.erase(to_remove) > 0)
    {

        std::map<IPackageReceiver*, double>::iterator it;
        for (it = probabilities.begin(); it != probabilities.end(); it++)
        {
            it->second = (it->second)/(1 - removed_probability);
        }

    }

}

IPackageReceiver *ReceiverPreferences::drawReceiver() {

    std::vector<double > probability_limit;
    std::vector<IPackageReceiver* > keys;
    double sum = 0;

    for(auto it : probabilities)
    {
        sum += it.second;
        probability_limit.push_back(sum);
        keys.push_back(it.first);


    }
    srand(time(NULL));
    double r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

    int drawn = -1;


    for (int i = 0; i < probability_limit.size() && drawn >= 0 ; ++i) {

        if(probability_limit[i] >= r)
        {
            drawn = i;
        }

    }



    return keys[drawn];
}

std::vector<std::pair<IPackageReceiver *, double>> ReceiverPreferences::view() {

    std::vector<std::pair<IPackageReceiver *, double>> to_return;

    for(auto it : probabilities)
    {
        to_return.push_back(std::make_pair(it.first,it.second));

    }

    return to_return;
}
