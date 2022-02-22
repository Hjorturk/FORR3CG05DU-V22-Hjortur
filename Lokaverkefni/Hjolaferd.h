// Hjörtur Kristjánsson

#include <iostream>
#include <string>
#include "Ferd.h"

using namespace std;

class Hjolaferd : public Ferd {
    private:
        int timi;
    public:
        Hjolaferd();
        Hjolaferd(int id, int fjoldi, int fjoldibokadir, int timi);
        int getTimi();
        void setTimi(int timi);
        void prenta();
    
};