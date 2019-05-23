#ifndef IPA_H
#define IPA_H

#include <string>
#include "Beer.hpp"

using namespace std;

class IPA : public Beer
{
    private:
        float volume;
        string brandy;
    public:
        IPA(string,float,string,string, double);
        virtual string getDescricao();
};

#endif
