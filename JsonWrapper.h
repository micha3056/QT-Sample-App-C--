#pragma once
#ifndef _JSON_
#define _JSON_
#include "json\json.h"

class JsonWrapper
{
private:
    Json::Value settings;
public:
    bool isFile(std::string filePath);
    void load(std::string filePath);
    void save(std::string filePath);
    template <typename T>
    void setProperty(std::string property, T value, ...);
    Json::Value getProperty(std::string property);
};
#endif