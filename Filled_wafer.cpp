/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Cracker.hpp"
#include "Filled_wafer.hpp"

using namespace std;

FilledWafer::FilledWafer(string type, string filling, int unit, double value) : Cracker(type, unit, value)
   {
       this->filling = filling;
   };
   
string FilledWafer::getDescricao()
   { 
       return ("Bolacha Recheada com " + filling + " - " + Cracker::getDescricao());
   };
   
/* fim de arquivo */
