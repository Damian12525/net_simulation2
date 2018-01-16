#include "functions.h"
#include "PackageQueue.h"
#include <regex>
#include <iostream>


Factory loadFactoryStructure(std::istream& inputStream)
{

    //Trzeba jakos zbierac linie po lini z tego inputStream
    //Nie za bardzo chdzialo mi wyjsc.


    Factory new_factory;

    std::regex comment_regex("^;");
    std::regex loadingRamp_regex("^LOADING_RAMP id=([0-9]+) delivery-interval=([0-9]+)");
    std::regex worker_regex("^WORKER id=([0-9]+) processing-time=([0-9]+) queue-type=(FIFO|LIFO)");
    std::regex storehouse_regex("^STOREHOUSE id=([0-9]+)");
    std::regex link_regex("LINK src=(ramp|worker)-([0-9]+) dest=(storehouse|worker)-([0-9]+) p=(1|0.[0-9]+)");
    std::cmatch m;


    const char *line = "WORKER id=1 processing-time=2 queue-type=FIFO";

    if(std::regex_match(line, m, comment_regex) == 0) {

        if (std::regex_match(line, m, worker_regex)) {
            IPackageQueue *new_queue;
            if (m[3].str() == "FIFO")
                new_queue = new PackageQueue(QueueType::FIFO);
            else if (m[3].str() == "LIFO")
                new_queue = new PackageQueue(QueueType::LIFO);

            Worker new_worker(std::stoi(m[1].str()), std::stoi(m[2].str()), new_queue);
            new_factory.addWorker(new_worker);


        } else if (std::regex_match(line, m, loadingRamp_regex)) {

            Ramp new_ramp(std::stoi(m[1].str()), std::stoi(m[2].str()));
            new_factory.addRamp(new_ramp);


        } else if (std::regex_match(line, m, storehouse_regex)) {
            Storehouse new_storehouse(std::stoi(m[1].str()));
            new_factory.addStorehouse(new_storehouse);


        } else if (std::regex_match(line, m, link_regex)) {


            if (m[1].str() == "worker")
            {

                Worker worker = new_factory.getWorker(std::stoi(m[2].str()));





            }






        }


    }


}