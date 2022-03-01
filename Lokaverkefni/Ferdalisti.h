// Hjörtur Kristjánsson
#pragma once

#include <iostream>
#include <string>

#include "Ferd.h"
#include "FerdaNode.h"
#include "Flugferd.h"
#include "Batsferd.h"
#include "Hjolaferd.h"

class Ferdalisti {
    private:
        FerdaNode* head;
    public:
        Ferdalisti();
        void skraFerd(Ferd* ferd);
        void skraFlugferd(int id, int fjoldisaeta, int fjoldibokadir, string afangastadur);
        void skraBatsferd(int id, int fjoldisaeta, int fjoldibokadir, bool yfirbyggdur);
        void skraHjolaferd(int id, int fjoldisaeta, int fjoldibokadri, int timi);
        bool skodaFerd(int id);
        bool eydaFerd(int id);
        bool baetaVidBokun(int id, int Nyrfjoldi);
        void prenta();
        virtual ~Ferdalisti();

};