// Hjörtur Kristjánsson
#include <iostream>
#include <string>
#include "Hjolaferd.h"

Hjolaferd::Hjolaferd() {
    this->timi = 0;
}
Hjolaferd::Hjolaferd(int id, int fjoldi, int fjoldibokadir, int timi)  : Ferd(id, fjoldi, fjoldibokadir) {
    this->timi = timi;
}
int Hjolaferd::getTimi() {
    return this->timi;
}
void Hjolaferd::setTimi(int timi) {
    this->timi = timi;
}
void Hjolaferd::prenta() {
    cout << "Id: " << this->getId() << " | Fjöldi Sæta: " << this->getFjoldiSaeta() << " | Fjöldi bókana: " << this->getFjoldibokadir() << " | Tími ferðar: " << this->getTimi() << endl;
}