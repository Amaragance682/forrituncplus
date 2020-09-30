#include <iostream>

using namespace std;

void synaFylki(int f []) {
    for(int i = 0; i < (sizeof(f)/sizeof(f[0])); i++) {
        cout << f[i] << endl;
    }
}

void baeta10vidStok(int f[], int staerd) {
    for(int i = 0; i < staerd; i++) {
        f[i] += 10;
    }
}
int main() {
    // python [2, 3.14, "abc"]
    int fylki[5];
    int heiltolur[100] = {1,2,3,4,5,6,7};
    fylki[0] = 10;
    fylki[1] = 14;
    cout << sizeof(heiltolur) << endl;
    cout << sizeof(int) << endl;
    int staerd = sizeof(heiltolur);

  //cout << fylki[0] << endl;
  //cout << heiltolur << endl;
    cout << &heiltolur[0] << endl;
    cout << &heiltolur[1] << endl;
    cout << &heiltolur[2] << endl;
    cout << sizeof(int) << endl;


    return 0;
}