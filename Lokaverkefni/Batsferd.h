// Hjörtur Kristjánsson

#include <iostream>
#include <string>
#include "Ferd.h"

using namespace std;

class Batsferd : public Ferd {
    private:
        bool yfirbyggdur; 
    public:
        Batsferd();
        Batsferd(int id, int fjoldi, int fjoldibokadir, bool yfirbyggdur);
        bool getYfirbyggður();
        void setYfirbyggður(bool yfirbyggdur);
        void prenta();
};