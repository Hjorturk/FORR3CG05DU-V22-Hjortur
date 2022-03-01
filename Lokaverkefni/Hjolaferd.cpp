// Hjörtur Kristjánsson
#include <iostream>
#include <string>
#include "Hjolaferd.h"

Hjolaferd::Hjolaferd() {
    this->timi = 0;
}
Hjolaferd::Hjolaferd(int id, int fjoldisaeta, int fjoldibokadir, int timi)  : Ferd(id, fjoldisaeta, fjoldibokadir) {
    this->timi = timi;
}
int Hjolaferd::getTimi() {
    return this->timi;
}
void Hjolaferd::setTimi(int timi) {
    this->timi = timi;
}
void Hjolaferd::prenta() {
    cout << "Id: " << this->getId() << " | Fjöldi Sæta: " << this->getFjoldiSaeta() << " | Fjöldi bókana: " << this->getFjoldibokadir() << " | Tími ferðar: " << this->getTimi() <<" klst" << endl;
}

string Hjolaferd::getType() {
    return "bátsferð";
}