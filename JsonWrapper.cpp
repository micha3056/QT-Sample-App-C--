#include "json\json.h"
#include "JsonWrapper.h"
#include <fstream>
#include <iostream>

using namespace std;
using namespace Json;

bool JsonWrapper::isFile(std::string filePath) {     //eventuell 0 o 1 selbst!
    if (!std::ifstream(filePath))
        return false;
    return true;
}
void JsonWrapper::load(std::string filePath) {
     if (isFile(filePath))
     {
         ifstream ifs(filePath);
         Json::Reader reader;
         reader.parse(ifs, settings); // reader can also read strings
     }
 }
void JsonWrapper::save(std::string filePath)
{
    if (settings.empty())
        return;
    ofstream myfile(filePath);
    myfile << settings << std::endl;
    myfile.close();
}
template <typename T>
void JsonWrapper::setProperty(std::string property, T value, ...) {
    settings[property] = value;
}
Json::Value JsonWrapper::getProperty(std::string property)
{
    return settings[property.c_str()];;
}