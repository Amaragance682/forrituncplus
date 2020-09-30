#include <iostream>

using namespace std;

int main() {
    int x = 10, y = 20, z = 30;
    if(x == 10 && y == 20 || z == 30 || x != 20)
    //        and        or             not
    int a = 1, b = 4; //a => 0001, b -> 0100
    //bitaadgerdir
    //shift(left og right)
    a = a << 2;
    cout << a << endl; // 0100
    a = a >> 1; //0010
    cout << a << endl;
    // & and, | or, - not, xor
    b = b | a; // 0100
               // 0010
               // 0110
    cout << b << endl;
    b = b & a; // 0110
               // 0010
               // 0010
    cout << b << endl;
    b = ~b; //00...000010 -> 11...111101
    cout << b << endl;
    // a = 01100001
    // A = 01000001
    // 32 =00100000 
    char stafur = 'a';
    cout << stafur << endl;
    stafur = stafur ^ 32;
    cout << stafur << endl;

    return 0;