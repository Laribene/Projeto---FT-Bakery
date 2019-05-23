/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MORTADELLA_H
#define MORTADELLA_H

#include <string>
#include "Food.hpp"

using namespace std;

class Mortadella : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Mortadella(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
