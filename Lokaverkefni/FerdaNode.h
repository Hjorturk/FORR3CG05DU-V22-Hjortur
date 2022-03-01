// Hjörtur Kristjánsson
#pragma once

#include "Ferd.h"

struct FerdaNode {
    Ferd* ferdin;
    FerdaNode* next;

    FerdaNode(Ferd* ferd) {
        this->ferdin = ferd;
        this -> next = nullptr;
    }

~FerdaNode() {
    delete this->ferdin;
}
};