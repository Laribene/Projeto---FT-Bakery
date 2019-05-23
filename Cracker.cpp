/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Food.hpp"
#include "Cracker.hpp"

using namespace std;

Cracker::Cracker(string type, int unit, double value) : Food(value)
   {
       this->type = type;
       this->unit = unit;
   };
   
string Cracker::getDescricao()
   { 
       return ("Bolacha " + type + " - " + to_string(unit) + " un/pacote.");
   };
   
/* fim de arquivo */
