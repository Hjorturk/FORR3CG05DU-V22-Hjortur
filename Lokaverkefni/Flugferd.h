// Hjörtur Kristjánsson
#pragma once
#include <iostream>
#include <string>
#include "Ferd.h"

using namespace std;

class Flugferd : public Ferd {
    private:
        string afangastadur;
    public:
        Flugferd();
        Flugferd(int id, int fjoldi, int fjoldibokadir, string afangastadur);
        string getAfangastadur();
        void setAfangastadur(string afangastadur);
        void prenta();
};