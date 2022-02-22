#include "Batsferd.h"
#include "Flugferd.h"
#include "Hjolaferd.h"
#include "Ferd.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
        Batsferd b1 = Batsferd(501, 2, 10, false);
        Batsferd b2 = Batsferd(502, 20, 100, true);
        Batsferd b3 = Batsferd(503, 6, 8, false);
        Flugferd f1 = Flugferd(504, 10, 50, "Akureyri");
        Flugferd f2 = Flugferd(505, 120, 200, "Tenerife");
        Flugferd f3 = Flugferd(506, 3, 10, "Grímsey");
        Flugferd f4 = Flugferd(507, 50, 250, "Boston");
        Hjolaferd h1 = Hjolaferd(508, 3, 10, 4);
        Hjolaferd h2 = Hjolaferd(509, 0, 20, 10);
        Hjolaferd h3 = Hjolaferd(510, 3, 5, 1);
        b1.prenta();
        b2.prenta();
        b3.prenta();
        f1.prenta();
        f2.prenta();
        f3.prenta();
        f4.prenta();
        h1.prenta();
        h2.prenta();
        h3.prenta();
    return 0;
};