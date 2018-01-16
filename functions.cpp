#include "functions.h"
#include <regex>
#include <iostream>


Factory loadFactoryStructure(std::istream& inputStream)
{

    std::string line;
    inputStream.getline(line);



    std::regex loadingRamp_regex("^LOADING_RAMP id=([0-9]+) delivery-interval=([0-9]+)");
    std::smatch m;

    for (auto result : m) {
        std::cout << result << std::endl;
    }



}