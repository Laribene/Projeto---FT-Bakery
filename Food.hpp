/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef FOOD_H
#define FOOD_H

#include <string>

using namespace std;

class Food
   {
   protected:
      double value;
      
   public:
    Food(double);
       virtual double getvalue();

       virtual string getDescricao() = 0;
   };
   
#endif
   
/* fim de arquivo */
