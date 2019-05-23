

#include <string>
#include "Food.hpp"
#include "Cheese.hpp"

using namespace std;

Cheese::Cheese(string type, float weight, double value) : Food(value)
   {
   this->type = type;
   this->weight = weight;
   };
   
string Cheese::getDescricao()
   { 
   return ("Cheese " + type + " - " + to_string(weight) + " Kg."); 
   };
