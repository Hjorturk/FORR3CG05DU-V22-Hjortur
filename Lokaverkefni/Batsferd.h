// Hjörtur Kristjánsson
#pragma once
#include <iostream>
#include <string>
#include "Ferd.h"

using namespace std;

class Batsferd : public Ferd {
    private:
        bool yfirbyggdur; 
    public:
        Batsferd();
        Batsferd(int id, int fjoldisaeta, int fjoldibokadir, bool yfirbyggdur);
        bool getYfirbyggdur();
        void setYfirbyggdur(bool yfirbyggdur);
        string getType();
        void prenta();
};