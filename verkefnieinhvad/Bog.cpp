#include "Bok.h"



Bok::Bok() {    //Bok er klasin sem er uppi, thetta linkar tha
        this->titill = "";
        this->hofundur = "";
        this->bladsidur = 1;
    }
Bok::Bok(string titill, string hofundur) {    //Bok er klasin sem er uppi, thetta linkar tha
        this->titill = titill;
        this->hofundur = hofundur;
        this->bladsidur = -1;
    }
Bok::Bok(string titill, string hofundur, int bladsidufjoldi) {
        this->titill = titill;    //this-> virkar eins og self, appendar titill med titill
        this->hofundur = hofundur;
        this->bladsidur = bladsidufjoldi < 0 ? 0 : bladsidufjoldi;
        /* if(bladsidufjoldi < 0)
            this->bladsidur = 0;
        else
            this->bladsidur = bladsidufjoldi;  */
    }
void Bok::prenta() {
    cout << this->titill << " - " << this->hofundur << " - " << this->bladsidur << endl;
}

string Bok::getTitill() {
    return this->titill;
}

void Bok::setTitill(string nyrTitill) {
    this->titill = nyrTitill;
}

string Bok::getHofundur() {
    return this->hofundur;
}

void Bok::setHofundur(string hofundur) {
    this->hofundur = hofundur;
}

int Bok::getBladsidufjoldi() {
    this->bladsidur;
}

void Bok::setBladsidufjoldi(int fjoldi) {
    if(fjoldi < 0){
        //kasta villu
        this->bladsidur = 0;
     }else {
        this->bladsidur = fjoldi;
     }
    }