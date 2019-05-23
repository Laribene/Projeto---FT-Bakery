#include <string>
#include "Liquid.hpp"
#include "Soda.hpp"



using namespace std;

Soda::Soda(string type, string brand, double volume, double value) : Liquid(type, value)
{
   this->brand = brand;
   this->volume = volume;
};
   
string Soda::getDescricao()
{
    return ("Soda " + brand + " - " + to_string(volume) + " liters");
};
