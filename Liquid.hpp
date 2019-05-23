/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef LIQUID_H
#define LIQUID_H

#include <string>
#include "Food.hpp"

using namespace std;

class Liquid : public Food
   {
   private:
       string type;
      
   public:
      Liquid(string, double);
   };
   
#endif
   
/* fim de arquivo */
