#pragma once
#ifndef _UTILITIES_
#define _UTILITIES_
#include <vector>
#include <string>

std::vector<std::string> split(std::string s, std::string delimiter);
bool replace(std::string& str, const std::string& from, const std::string& to);
int writeToFile(std::string input, std::string filePath);
#endif