/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Food.hpp"
#include "Bread.hpp"

using namespace std;

Bread::Bread(string type, float weight, double value) : Food(value){
   this->type = type;
   this->weight = weight;
};
   
string Bread::getDescricao(){ 
   return ("Bread " + type + " - " + to_string(weight) + " Kg."); 
};
   
/* fim de arquivo */
