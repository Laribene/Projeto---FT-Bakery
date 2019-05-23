/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef FILLED_WAFER_H
#define FILLED_WAFER_H

#include <string>
#include "Cracker.hpp"

using namespace std;

class FilledWafer : public Cracker
   {
   private:
      string filling;
      
   public:
      FilledWafer(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
