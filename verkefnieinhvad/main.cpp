#include <iostream>
#include <string>

using namespace std;

class Bok { //struct
private: //private
    string titill; //_titill
    string hofundur;
    int bladsidur;
public: //adgengilegt
    Bok();

    Bok(string, string);
    
    Bok(string titill, string hofundur, int bladsidufjoldi) {
        this->titill = titill;    //this-> virkar eins og self, appendar titill med titill
        this->hofundur = hofundur;
        this->bladsidur = bladsidufjoldi;
        /* if(bladsidufjoldi < 0)
            this->bladsidur = 0;
        else
            this->bladsidur = bladsidufjoldi;  */
    }

    void prenta();

    //getters og setters, 2 foll per gagnabreytu
    string getTitill() {
        return this->titill;
    }

    void setTitill(string nyrTitill) {
        this->titill = nyrTitill;
    }

    string getHofundur() {
        return this->hofundur;
    }

    void setHofundur(string hofundur) {
        this->hofundur = hofundur;
    }

    int getBladsidufjoldi() {
        this->bladsidur;
    }

    void setBladsidufjoldi(int fjoldi) {
        if(fjoldi < 0){
            //kasta villu
            this->bladsidur = 0;
        }else {
            this->bladsidur = fjoldi;
        }
    }
};

Bok::Bok() {    //Bok er klasin sem er uppi, thetta linkar tha
        this->titill = "";
        this->hofundur = "";
        this->bladsidur = 1;
    }
    Bok::Bok() {    //Bok er klasin sem er uppi, thetta linkar tha
        this->titill = titill;
        this->hofundur = hofundur;
        this->bladsidur = -1;
    }
Bok::Bok(string titill, string hofundur, int bladsidufjoldi) {
        this->titill = titill;    //this-> virkar eins og self, appendar titill med titill
        this->hofundur = hofundur;
        this->bladsidur = bladsidufjoldi;
        /* if(bladsidufjoldi < 0)
            this->bladsidur = 0;
        else
            this->bladsidur = bladsidufjoldi;  */
    }
void Bok::prenta() {
        cout << this->titill << " - " << this->hofundur << " - " << this->bladsidur << endl;
    }












//python
class klasi:
    def __init__(self, data);





int main() {
    Bok b;
    b.titill = "python 101";
    b.hofundur = "konni";
    b.bladsidur = 102;

    Bok c = Bok("Titillinn a bokinni", "hofundurinn", 23);

    //cout << c.titill << " - " << c.hofundur << " - " << c.bladsidur << endl;
    b.prenta();
    c.prenta();
    return 0;
}
// hvenaer nota struct og hvenaer Class?  Class notar private, og struct notar public, skiptir engu mali hvad er notad, almennt er notad Class