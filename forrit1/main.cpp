#include <iostream>
#include <string>
using namespace std;
 
#include "Bok.h"


int main() {

    unsigned int k = 1;
    cout << k << endl; //k = 00000001
    k = k << 2;        //k = 00000100
    cout << k << endl;
    k = k >> 1;        //k = 00000010
    cout << k << endl;
    // & | ~ ^


    Bok baekur[5];
    Bok b("python 101", "konni", 102)
    baekur[0] = b;

    Bok c = Bok("titillin a bokinni", "hofundurinn", 23);
    baekur[1] = c;
    baekur[2] = Bok("skolastarf a timum covid", "hildur ingvarsdottir");

    for(int i = 0; i < 5; i++) {
        baekur[i].prenta();

    }

    return 0;
}




//* int main() {
    int tala = 4200000;
    cout << sizeof(tala) << endl;
    std::cout << tala << endl;
    return 0;
} *\\