// Hjörtur Kristjánsson
#include <iostream>
#include <string>
#include "Flugferd.h"

Flugferd::Flugferd() {
    this->afangastadur = "";
}
Flugferd::Flugferd(int id, int fjoldisaeta, int fjoldibokadir, string afangastadur ) : Ferd(id, fjoldisaeta, fjoldibokadir) {
    this->afangastadur = afangastadur;
}
string Flugferd::getAfangastadur() {
    return this->afangastadur;
}
void Flugferd::setAfangastadur(string afangastadur) {
    this->afangastadur = afangastadur;
}
void Flugferd::prenta() {
    cout << "Id: " << this->getId() << " Fjöldi Sæta: " << this->getFjoldiSaeta() << " Fjöldi bókana: " << this->getFjoldibokadir() << " Áfangastaður: " << this->getAfangastadur() << endl;
}