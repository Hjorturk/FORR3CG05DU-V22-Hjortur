// Hjörtur Kristjánsson
#include "Batsferd.h"
#include "Flugferd.h"
#include "Hjolaferd.h"
#include "Ferd.h"
#include "Ferdalisti.h"
#include "rlutil.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    Ferdalisti fl;
        rlutil::setColor(rlutil::MAGENTA);
        // til að skrá ferð er sett inn id->sætafjölda->fjöldi bókaðra->Tími/Áfangastaður/Yfirbyggður('0' er false/nei og einhver önnur tala er true/já)
        fl.skraBatsferd(501, 10, 2, false);
        fl.skraBatsferd(502, 100, 20, true);
        fl.skraBatsferd(503, 8, 6, false);
        fl.skraFlugferd(504, 50, 10, "Akureyri");
        fl.skraFlugferd(505, 200, 120, "Tenerife");
        fl.skraFlugferd(506, 10, 3, "Grímsey");
        fl.skraFlugferd(507, 250, 50, "Boston");
        fl.skraHjolaferd(508, 10, 3, 4);
        fl.skraHjolaferd(509, 20, 11, 10);
        fl.skraHjolaferd(510, 5, 3, 1);
        rlutil::resetColor();

    string inntak; //öll skipunin
    string skipun; // skrá/breyta/eyða/prenta
    string tegundferdar;
    string afangastadur;
    int id, fjoldi, fjoldibokadir, timi, nyrfjoldi;
    bool yfirbyggdur;

    do {
        rlutil::setColor(rlutil::CYAN);
        cout << "Sláðu inn skipun: ";
        rlutil::setColor(rlutil::MAGENTA);
        getline(cin, inntak);

        stringstream ss;
        ss << inntak;
        ss >> skipun;

        if(skipun == "prenta") {
            rlutil::resetColor();
            rlutil::setColor(rlutil::GREEN);
            fl.prenta();
            rlutil::resetColor();
        } else if(skipun == "skoða") {
            rlutil::resetColor();
            ss >> id;
            if(!fl.skodaFerd(id)) {
                rlutil::setColor(rlutil::LIGHTRED);
                cout << "Fann ekki ferd með þetta id: " << id << " Vinsamlegast athugið að id hafi verið rétt skrifað." << endl;
            }
        } else if(skipun == "skrá") {
            ss >> tegundferdar;
            if (tegundferdar == "flug") {
                ss >> id >> fjoldi >> fjoldibokadir >> afangastadur;
                fl.skraFlugferd(id, fjoldi, fjoldibokadir, afangastadur);
            } else if(tegundferdar == "bát") {
                ss >> id >> fjoldi >> fjoldibokadir >> yfirbyggdur;
                fl.skraBatsferd(id,fjoldi,fjoldibokadir,yfirbyggdur);
            } else if(tegundferdar == "hjól") {
                ss >> id >> fjoldi >> fjoldibokadir >> timi;
                fl.skraHjolaferd(id,fjoldi,fjoldibokadir,timi);
            } else {
                rlutil::setColor(rlutil::LIGHTRED);
                cout << "Þessi tegund af ferð er ekki þekkt. Bara Flug-, Báts-, og Hjólaferðir eru í boði að þessu sinni." << endl;
            }
        } else if(skipun == "eyða") {
            ss >> id;
            if(!fl.eydaFerd(id)) {
                rlutil::setColor(rlutil::LIGHTRED);
                cout << "Fann ekki ferð með þetta id: " << id << " Vinsamlegast athugið að rétt ID var skráð " << endl;
            }
        } else if(skipun == "bóka") {
            ss >> id >> nyrfjoldi;
            if(fl.baetaVidBokun(id, nyrfjoldi) == false) {
                rlutil::setColor(rlutil::LIGHTRED);
                cout << "Fann ekki ferð með þetta id: " << id << " | Eða of margir bókaðir" << endl;
            }
        } else if(skipun != "hætta") {
            rlutil::setColor(rlutil::LIGHTRED);
            cout << "Skipun þessi er ekki þekkt, vinsamlegast reynið aftur" << endl;
        }
    }
    while(skipun != "hætta");
    cout << "Eiðgu góðann dag." << endl;
    rlutil::resetColor();
    return 0;
};