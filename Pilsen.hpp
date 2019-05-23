#ifndef PILSEN_H
#define PILSEN_H

#include <string>
#include "Beer.hpp"

using namespace std;

class Pilsen : public Beer
{
    private:
        float volume;
        string brandy;
    public:
        Pilsen(string,float,string,string, double);
        virtual string getDescricao();
};

#endif
