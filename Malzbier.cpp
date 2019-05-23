
#include <string>
#include "Beer.hpp"
#include "Malzbier.hpp"

using namespace std;

Malzbier::Malzbier(string brandy, float volume,string brand, string type, double value) : Beer(brand,type, value)
{
    this->volume = volume;
    this->brandy= brandy;
};

string Malzbier::getDescricao()
{
    return( "Malzbier "+ brandy + " " + to_string(volume) + " ml");
};

/* fim de arquivo */
