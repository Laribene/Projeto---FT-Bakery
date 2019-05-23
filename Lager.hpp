#ifndef LAGER_H
#define LAGER_H

#include <string>
#include "Beer.hpp"

using namespace std;

class Lager : public Beer
{
    private:
        float volume;
        string brandy;
    public:
        Lager(string,float,string,string, double);
        virtual string getDescricao();
};

#endif
