#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
int main()
{
std::ifstream iFile("test.txt");
if (iFile.is_open())
{
std::ofstream oFile("test-out.txt", std::ios_base::out | std::ios_base::trunc);
if (oFile.is_open())
{
std::string line;
int row = 0;
while (getline(iFile, line) && oFile.good())
{
oFile <<"asfjpofihaipf"<< "\n";
}
oFile.close();
}
iFile.close();
}
return 0;
}
