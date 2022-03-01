// Hjörtur Kristjánsson
#include <iostream>
#include <string>
#include "Ferd.h"

Ferd::Ferd() {
    this->id = 0;
    this->fjoldisaeta = 0;
    this->fjoldibokadir = 0;
}
Ferd::Ferd(int id, int fjoldisaeta, int fjoldibokadir) {
    this->id = id;
    this->fjoldisaeta = fjoldisaeta;
    this->fjoldibokadir = fjoldibokadir;
}
int Ferd::getId() {
    return this->id;
}
void Ferd::setId(int id) {
    this->id = id;
}
int Ferd::getFjoldiSaeta() {
    return this->fjoldisaeta;
}
void Ferd::setFjoldiSaeta(int fjoldisaeta) {
    this->fjoldisaeta = fjoldisaeta;
}
int Ferd::getFjoldibokadir() {
    return this->fjoldibokadir;
}
void Ferd::setFjoldibokadir(int fjoldibokadir) {
    this->fjoldibokadir = fjoldibokadir;
}
bool Ferd::baedtavidbokun(int vidbot) {
    if(vidbot+this->fjoldibokadir <= this->fjoldisaeta) {
        this->fjoldibokadir += vidbot;
        cout << "Fjöldi bókaðra hefur verið uppfært!" << endl;
        return true;
    }
    return false;
}
void Ferd::prenta() {
    cout << "Id: " << this->id << " Fjöldi Sæta: " << this->fjoldisaeta << " Fjöldi bókaðra: " << this->fjoldibokadir << endl;
}

Ferd::~Ferd() {

}