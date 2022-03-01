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
        void setId(int id);
        int getFjoldiSaeta();
        void setFjoldiSaeta(int fjoldisaeta);
        int getFjoldibokadir();
        void setFjoldibokadir(int fjoldibokadir);
        bool baedtavidbokun(int vidbot);
        virtual string getType() = 0;
        virtual void prenta();
        virtual ~Ferd();
};