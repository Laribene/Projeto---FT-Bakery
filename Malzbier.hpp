#ifndef MALZBIER_H
#define MALZBIER_H

#include <string>
#include "Beer.hpp"

using namespace std;

class Malzbier : public Beer
{
    private:
        float volume;
        string brandy;
    public:
        Malzbier(string,float,string,string, double);
        virtual string getDescricao();
};

#endif
