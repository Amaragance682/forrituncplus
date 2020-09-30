#include <iostream>

using namespace std;

int main() {

    for(int i = 0; < 5; i++) {        //i++ = i += 1
        cout << i << endl;

    }

    int w = 4;
    while(w < 5) {
        cout << w << endl;
        w--;                         //w++ = += 1
    }
    int j = 3;
    do {
        cout << j << endl;
        j++;
    } while(j < 5);

    cout << w << endl;

    if(w < 10) {
        cout << w << " er minna en 10\n";
    } else if(w > 10){
        cout << w << " er staerra en 10\n"
    } else {
        cout << w << " er 10\n";
    }

    switch(w) {
        case 1:
            cout << "thu slost inn einn \n";
            break;
        case 2:
            cout << "thu slost inn tvo \n";
            break;
        case 3:
            cout << "thu slost inn trja \n";
            break;
        default:
            cout << "thu slost inn einhvad annad \n";
            break;
    }
    
    int t = 10;

    cout << (t < 10 ? "t er minna en 10" : "t er ekki minna e 10") << endl;

    int q = (t < 10 ? 20 : 30);
    if(t < 10){
        q = 20;
    } else {
        q = 30;
    }

    int x2 = x * x;

    return 0:
}
int main() {
    cout << 1.0f / 2.0f << endl;
    float f = 1.23456789f;
    cout << fixed << setprecision(2) << f << endl;
    return 0;
}