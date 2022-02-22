// Hjörtur Kristjánsson
#pragma once

#include <iostream>
#include <string>

using namespace std;
class Ferd{
    private:
        int id;
        int fjoldisaeta;
        int fjoldibokadir;
    public:
        Ferd();
        Ferd(int id, int fjoldisaeta, int fjoldibokadir);
        int getId();
        void setId(int);
        int getFjoldiSaeta();
        void setFjoldiSaeta(int);
        int getFjoldibokadir();
        void setFjoldibokadir(int);
        bool baetaVidBokun(int vidbot);
        virtual void prenta();
        ~Ferd();
};