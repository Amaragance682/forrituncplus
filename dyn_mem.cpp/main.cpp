#include <iostream>

using namespace std;

int main() {
    int k = 16;
    int* pk = &k;
    cout << pk << endl;
    cout << &k << endl;
    cout << *pk << endl;

    //int* = ekki int breyta, thetta er pointer breyta
    // mismunur af stack og heap, stack allocate 8192 byte=8 mb, heap notar restina af vinnsluminninu= 16gb ram a thessari tolvu


    //pointerar eru breytur
    // pointerar eru geymdir a stacknum, pointerar eru gildi/breyta sem geyma numer a minnisholfi 



    // new - tekur fra minni a heap
    // delete - losar plass a heap
    int* htala = new int(13);
    int* hfylki = new int[10];
    // hfylki int[10] gefur 7040, 10 = 40 auka bytes, 1  tegund af tolum eru = 4 bytes, hfylki int[8] gefur 7032 = 4*8,,, 124 = 4 byte, 38357 = 4 byte

    for(int i = 0; i < 10; i++) {
        hfylki[i] = (i + 1) * 10;
    }

    delete htala;
    delete[]  hfylki;
    return 0;


    cout << &hfylki[0] << endl;
    cout << &hfylki[1] << endl;
    cout << &hfylki[2] << endl;
    cout << &hfylki[3] << endl;
    hfylki++;
    cout << hfylki << endl;
    hfylki++;
    cout << hfylki << endl;
    hfylki++;
    cout << hfylki << endl;
    
    *hfylki = 10;

    cout << "abc" << endl;
}