
#include <string>
#include "Food.hpp"
#include "Ham.hpp"

using namespace std;

Ham::Ham(string type, float weight, double value) : Food(value)
   {
       this->type = type;
       this->weight = weight;
   };
   
string Ham::getDescricao()
   { 
       return ("Ham " + type + " - " + to_string(weight) + " Kg."); 
   };
   
/* fim de arquivo */
