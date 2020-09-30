#pragma once

#include <string>
#include <iostream>

using namespace std;

class Bill{
    private:
        int id;
        string tegund;
        string litur;
    public:
        Bill();
        Bill(int id, string tegund, string litur);

        int getID();
        void setId(int id);

        string getTegund();
        void setTegund(string tegund);

        string getLitur();
        void setLitur(string litur);

        void prenta();

};