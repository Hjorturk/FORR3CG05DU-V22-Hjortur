#pragma once

#include "Ferd.h"

struct FerdNode {
    Ferd* ferdin;
    FerdNode* next;

    FerdNode(Ferd* is) {
        this->ferdin = is;
        this->next = nullptr;
    }

    ~FerdNode() {
        delete this->ferdin;
    }
};