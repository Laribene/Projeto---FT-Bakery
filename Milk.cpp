
#include <string>
#include "Liquid.hpp"
#include "Milk.hpp"



using namespace std;

Milk::Milk(string type, string brand, double volume, double value) : Liquid(type, value)
   {
    this->brand = brand;
    this->volume = volume;
   };
   
string Milk::getDescricao()
   { 
    return ("Leite " + brand + " - " + to_string(volume) + " litros");
   };
