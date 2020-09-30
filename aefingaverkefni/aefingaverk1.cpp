#include <iostream>
#include <iomanip>
#include <string>      //bara einhver include fyrir hluti
int main()          //main sem vinnur med tolur/int
{
float v=2; // vid faum meiri aukatolur med float
float result = v + 1 * 2; 
std::cout << "result: " << result << " expected result : 6" << std::endl;
result = v + 1 * v + 2 * 2;
std::cout << "result: " << result << " expected result : 24" << std::endl;
result = v - 1 * 2 + 2 * 2;
std::cout << "result: " << result << " expected result : 6" << std::endl;
result = v + v * v + v * 2;
std::cout << "result: " << result << " expected result : 32" << std::endl;
result = (int)v % 2 * v + 2 * 2;
std::cout << "result: " << result << " expected result : 0" << std::endl;
}
//fyrir ofan eru fullt ad daemum sem vinna med v sem er = 2, og skrifar ut nidurstoduna
//std:: cout thydir ad thad er verid ad taka hluti ur std namespace, og nota valueinn thar
// << er output, eda eins og print
// >> er input, eda eins og input i python