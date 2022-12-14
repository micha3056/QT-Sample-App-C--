#include <string>
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
#include "Powershell.h"
#include "utilities.h"

using namespace std;

std::string ssystem(const char* command) {
    char tmpname[L_tmpnam];
    std::tmpnam(tmpname);
    std::string scommand = command;
    std::string cmd = scommand + " >> " + tmpname;
    std::system(cmd.c_str());
    std::ifstream file(tmpname, std::ios::in | std::ios::binary);
    std::string result;
    if (file) {
        while (!file.eof()) result.push_back(file.get())
            ;
        file.close();
    }
    remove(tmpname);
    return result;
}

std::string RunPowershellScript(std::string script, std::string delimeter = "\n")
{
    //string command = "powershell -Command \" & " + script + "\"";     //powershell -Command " & ls"
    string command = "powerShell -File " + script;
    string output = ssystem(command.c_str());
    return output;
}

void killPort(int port)
{
    //TODO: validation
    string portStr = std::to_string(port);
    string PowerShellScript = "$row = netstat -ano | findstr :3000\n"
        "$row\n"
        "$PIDs = ($row[0] | ConvertFrom-String | select p6).P6\n"
        "$PIDs\n"
        "taskkill /F /PID $PIDs\n";
    replace(PowerShellScript, "3000", portStr);      //TODO: REPLACE DOESNT WORK YET
    //std::string string("hello $name");
    //replace(string, "$name", "Somename");
    std::string ScriptPath = "tempscript.ps1";
    writeToFile(PowerShellScript, ScriptPath);
    std::string response = RunPowershellScript(ScriptPath);
    cout << response;
}