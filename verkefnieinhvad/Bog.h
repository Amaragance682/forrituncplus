
#pragma once

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

    Bok(string titill, string hofundur);
    
    Bok(string titill, string hofundur, int bladsidufjoldi);

    void prenta();

    //getters og setters, 2 foll per gagnabreytu
    string Bok::getTitill();

    void Bok::setTitill(string nyrTitill);

    string Bok::getHofundur();

    void Bok::setHofundur(string hofundur); 

    int Bok::getBladsidufjoldi();

    void Bok::setBladsidufjoldi(int fjoldi);
    
};