#include <iostream>
#include <string>

#include "Bok.h"

using namespace std;



int main() {
    Bok b;
    b.titill = "python 101";
    b.hofundur = "konni";
    b.bladsidur = 102;

    Bok c = Bok("Titillinn a bokinni", "hofundurinn", 23);
    cout << "bokinn heitir:"

    //cout << c.titill << " - " << c.hofundur << " - " << c.bladsidur << endl;
    b.prenta();
    c.prenta();
    return 0;
}
// hvenaer nota struct og hvenaer Class?  Class notar private, og struct notar public, skiptir engu mali hvad er notad, almennt er notad Class