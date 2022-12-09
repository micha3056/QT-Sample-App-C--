# QT Widget App: DevAdmin

## How to compile a C++ library with Visual Studio
Link to  [Tutorial Eigen Compile](https://eigen.tuxfamily.org/dox/GettingStarted.html)
1.  download EIGEN source: https://gitlab.com/libeigen/eigen/-/releases/3.4.0
2.  unzip to: "C:\Binaries\eigen-3.4.0" (no compiling needed!)
3.  In Visual Studio, make a new project: (`File | New | C++ Empty Project`)
4.  Paste sample code:
```sh
#include <iostream>
#include <Eigen/Dense>
using Eigen::MatrixXd;
int main()
{
    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    std::cout << m << std::endl;
}
```
5.  Visual Studio > Project > Properties > C/C++ (`Additional Include Directories: "C:\Binaries\eigen-3.4.0\"`)

## How to include a library in C++
Link to  [JSON Library](https://github.com/nlohmann/json)
1.  download JSON LIB source: https://gitlab.com/libeigen/eigen/-/releases/3.4.0
2.  Paste sample code:
```sh
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

int main()
{
	std::ifstream f("example.json");
	json data = json::parse(f);
}

```
5.  Visual Studio > Project > Properties > C/C++ (`Additional Include Directories: "C:\Binaries\eigen-3.4.0\"`)
6. Visual Studio > Project > Properties > Linker > General(`Additional Library Directories: "C:\Binaries\json-develop`) not needed
7.  Click Linker and add the Libraries Search Path

##Screenshots
<img src="./screenshots/Gui.png" width="600">


