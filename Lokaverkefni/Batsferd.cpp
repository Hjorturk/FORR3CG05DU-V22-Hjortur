// Hjörtur Kristjánsson
#include <iostream>
#include <string>
#include "Batsferd.h"

Batsferd::Batsferd() {
    this->yfirbyggdur = false;
}
Batsferd::Batsferd(int id, int fjoldisaeta, int fjoldibokadir, bool yfirbyggdur)  : Ferd(id, fjoldisaeta, fjoldibokadir){
    this->yfirbyggdur = yfirbyggdur;
}
bool Batsferd::getYfirbyggdur() {
    return this->yfirbyggdur;
}
void Batsferd::setYfirbyggdur(bool yfirbyggdur) {
    this->yfirbyggdur = yfirbyggdur;
}
void Batsferd::prenta() {
    cout << "Id: " << this->getId() << " | Fjöldi Sæta: " << this->getFjoldiSaeta() << " | Fjöldi bókana: " << this->getFjoldibokadir() << " | Yfirbyggður: " << (this->getYfirbyggdur() ? "Já" : "Nei") << endl;
}