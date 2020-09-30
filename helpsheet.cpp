// int - heiltolur, float/double - kommutolur, char - einn stafur,
// string - textastrengur, bool - true/false



// int - long - short, unsigned
// example:
unsigned int k = -1: // unsigned -> bara + tolur -> 0000000010101 ef 1 er fremmst er talan minus tala, ef 0 er fremmst er talan plus tala
cout << k << endl;

// if, case
// example:
if(k < 10) {

} else if(k > 10) {

} else {

}

// switch - case
switch (k)
{
case 1:
    //gera eitthvad ef k == 1
    // margar linur
    break;
case 7:
    // geri eitthvad
    break;
default:
    // gerist ef k != 1 og k != 7
    break;
}





// ternari operator
k = k > 10 ? 20 : 30; //c++ version

// thetta er thad sama:
if(k > 10) {
    k = 20;
} else {
    k = 30;
}




while(k < 10) {
    //gera einhvad
}

do{
    // gera einhvad
} while(k < 10);




for(int i = 0; < 10; i++) { // version 1
    cout << i << endl;
}

int j = 0;
while(j < 10) {             //version 2
    cout << j << endl;
    j++;#include <iostream>
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
}