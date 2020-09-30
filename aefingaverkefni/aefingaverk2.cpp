#include <iostream>

using namespace std;
int main() {
float pi = 3.14159265359;
float x,y;
cout << "Enter value for x: ";
cin >> x;

float x2 = x * x;
float pi2 = pi * pi;
float halfur = 0.5f;

y = x2 / (pi2 * (x2 + halfur)) * 
    (1 + x2 / (pi2 * (x2 - halfur)*(x2 - halfur)));


cout << "y = " << y;
return 0;