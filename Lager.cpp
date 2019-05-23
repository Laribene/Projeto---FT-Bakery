

#include <string>
#include "Beer.hpp"
#include "Lager.hpp"

using namespace std;

Lager::Lager(string brandy, float volume,string brand, string type, double value) : Beer(brand,type, value)
{
    this->volume = volume;
    this->brandy= brandy;
};

string Lager::getDescricao()
{
    return( "Lager "+ brandy + " " + to_string(volume) + " ml");
};

/* fim de arquivo */
