#pragma once
#include <iostream>
#include <string>
#include "Ferd.h"
#include "FerdNode.h"

class FerdaListi {
    private:
        FerdNode* head;
    public:
        FerdaListi();
        void skraFerd(Ferd* fl);
        void skraFerd(int id, int fjoldisaeta, int fjoldibokadir);
        bool breytaBokunum(int id, int nyBokadir);
        bool skodaFerd(int id);
        bool eydaFerdID(int id);
        bool skodaBatsferdir();
        bool skodaFlugferdir();
        bool skodaHjolaferdir();
        void prenta();
        ~FerdaListi();
};