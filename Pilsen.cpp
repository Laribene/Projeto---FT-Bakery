

#include <string>
#include "Beer.hpp"
#include "Pilsen.hpp"

using namespace std;

Pilsen::Pilsen(string brandy, float volume,string brand, string type, double value) : Beer(brand,type, value)
{
    this->volume = volume;
    this->brandy= brandy;
};

string Pilsen::getDescricao()
{
    return( "Pilsen "+ brandy + " " + to_string(volume) + " ml");
};

/* fim de arquivo */
