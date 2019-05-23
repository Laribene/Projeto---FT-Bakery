
#include <string>
#include "Food.hpp"
#include "Mortadella.hpp"

using namespace std;

Mortadella::Mortadella(string type, float weight, double value) : Food(value)
   {
   this->type = type;
   this->weight = weight;
   };
   
string Mortadella::getDescricao()
   { 
   return ("Mortadella " + type + " - " + to_string(weight) + " Kg."); 
   };
   
/* fim de arquivo */
