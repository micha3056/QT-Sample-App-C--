#pragma once
#ifndef _POWERSHELL_
#define _POWERSHELL_

#include <string>
using namespace std;

#include <io.h>   // For access().
#include <sys/types.h>  // For stat().
#include <sys/stat.h>   // For stat().

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>

std::string ssystem(const char* command);
std::string RunPowershellScript(std::string script, std::string delimeter);
void killPort(int port);
#endif