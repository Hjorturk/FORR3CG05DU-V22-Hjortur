// Hjörtur Kristjánsson
#pragma once
#include <iostream>
#include <string>
#include "Ferd.h"

using namespace std;

class Hjolaferd : public Ferd {
    private:
        int timi;
    public:
        Hjolaferd();
        Hjolaferd(int id, int fjoldisaeta, int fjoldibokadir, int timi);
        int getTimi();
        void setTimi(int timi);
        string getType();
        void prenta();
    
};