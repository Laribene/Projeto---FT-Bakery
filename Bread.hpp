/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef BREAD_H
#define BREAD_H

#include <string>
#include "Food.hpp"

using namespace std;

class Bread : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Bread(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
