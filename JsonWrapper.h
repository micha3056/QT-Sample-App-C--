#pragma once
#ifndef _JSON_
#define _JSON_
#include "json\json.h"

class JsonWrapper
{
private:
    Json::Value settings;
public:
    static bool isFile(std::string filePath);
    void load(std::string filePath);
    void save(std::string filePath);
    template <typename T>
    T add(T num1, T num2);
    template <typename T>
    void setProperty(std::string property, T value);
    Json::Value getProperty(std::string property);
};

//it doesnt work if you put it into seperate cpp file due to linking problems, tem,plate is created twice!
template <typename T>
T JsonWrapper::add(T num1, T num2) {
    return (num1 + num2);
}
template <typename T>
void JsonWrapper::setProperty(std::string property, T value) {
    settings[property] = value;
}
#endif