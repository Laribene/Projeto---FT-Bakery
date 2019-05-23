

#include <string>
#include "Beer.hpp"
#include "Ipa.hpp"

using namespace std;

IPA::IPA(string brandy, float volume,string brand, string type, double value) : Beer(brand,type, value)
{
    this->volume = volume;
    this->brandy= brandy;
};

string IPA::getDescricao()
{
    return( "IPA "+ brandy + " " + to_string(volume) + " ml");
};

/* fim de arquivo */
