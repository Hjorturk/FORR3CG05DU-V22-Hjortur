// Hjörtur Kristjánsson
#include "Ferdalisti.h"

Ferdalisti::Ferdalisti() {
    this->head = nullptr;
}
void Ferdalisti::skraFerd(Ferd* ferd) {
    FerdaNode* nyFerd = new FerdaNode(ferd);
    if(!this->head) {
        this->head = nyFerd;
    } else {
        nyFerd->next = this->head;
        this->head = nyFerd;
    }
}
void Ferdalisti::skraFlugferd(int id, int fjoldi, int fjoldibokadir, string afangastadur) {
    this->skraFerd(new Flugferd(id, fjoldi, fjoldibokadir, afangastadur));
    cout << "Ferð hefur verið skráð!" << endl;
}
void Ferdalisti::skraBatsferd(int id, int fjoldi, int fjoldibokadir, bool yfirbyggdur) {
    this->skraFerd(new Batsferd(id, fjoldi, fjoldibokadir,yfirbyggdur));
    cout << "Ferð hefur verið skráð!" << endl;
}
void Ferdalisti::skraHjolaferd(int id, int fjoldi, int fjoldibokadir, int timi) {
    this->skraFerd(new Hjolaferd(id, fjoldi, fjoldibokadir,timi));
    cout << "Ferð hefur verið skráð!" << endl;
}
bool Ferdalisti::skodaFerd(int id) {
    FerdaNode* current = this->head;
    while(current) {
        if(current->ferdin->getId() == id) {
            current->ferdin->prenta();
            return true;
        }
        current = current->next;
    }
    return false;
}
bool Ferdalisti::eydaFerd(int id) {
    if(this->head) {
        if(this->head->ferdin->getId() == id) {
            FerdaNode* newHead = this->head->next;
            delete this->head;
            this->head = newHead;
            cout << "Ferð hefur verið eytt!" << endl;
            return true;
        } else {
            FerdaNode* current = this->head;
            FerdaNode* prev = this->head;
            while(current) {
                if(current->ferdin->getId() == id) {
                    prev->next = current->next;
                    delete current;
                    cout << "Ferð hefur verið eytt!" << endl;
                    return true;
            }
            prev = current;
            current = current->next;
            }
        }
    }
    return false;
}
bool Ferdalisti::baetaVidBokun(int id, int Nyrfjoldi) {
    FerdaNode* current = this->head;
    while(current) {
        if(current->ferdin->getId() == id) {
            return current->ferdin->baedtavidbokun(Nyrfjoldi);
        }
        current = current->next;
    }
    return false;
}
void Ferdalisti::prenta() {
    FerdaNode* current = this->head;
    while(current) {
        current->ferdin->prenta();
        current = current->next;
    }
}
Ferdalisti::~Ferdalisti() {
    while(this->head) {
        FerdaNode* newHead = this->head->next;
        delete this->head;
        this->head = newHead;
    }
}