
#include <string>
#include "Liquid.hpp"
#include "Water.hpp"



using namespace std;

Water::Water(string tipo, string brand, double volume, double value) : Liquid(tipo, value)
{
    this->brand = brand;
    this->volume = volume;
};
   
string Water::getDescricao()
{
    return ("Water " + brand + " - " + to_string(volume) + " liters"); 
};
