#include <iostream>
#include <string>

using namespace std;

class Bill {
private:
    int id;
    string tegund;
    string litur;
    public:
    Bill() {    //constructor eda init fa
        this->id = 0;
        this->tegund = "";
        this->litur = "";
    }
    Bill(int ids, string tegund, string litur) {
        this->id = ids;    //this-> virkar eins og self, appendar titill med titill
        this->tegund = tegund;
        this->litur = litur;
    }
};

void prenta() {
        cout << this->id << " - " << this->tegund << " - " << this->litur << endl;
    }
//getters og setters, 2 foll per gagnabreytu
string gettegund() {
    return this->tegund;
}

void settegund(string nyrtegund) {
    this->tegund = nyrtegund;
}

string getlitur() {
    return this->litur;
}

void setlitur(string litur) {
    this->litur = litur;
}

int ids() {
    this->id;
}

    void ids(int fjoldi) {
        if(fjoldi < 0){
            //kasta villu
            this->id = 0;
        }else {
            this->id = fjoldi;
        }
    }












int main() {
    Bill b;
    b.id = 15;
    b.tegund = stor;
    b.litur = raudur;

    Bill c = Bill(13043583, "tegundinn?", "liturinn?");

    cout << c.id << " - " << c.tegund << " - " << c.raudur << endl;

    b.prenta();
    c.prenta();
    return 0;

}