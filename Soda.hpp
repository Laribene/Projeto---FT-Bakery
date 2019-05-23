
#ifndef SODA_H
#define SODA_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Soda : public Liquid
   {
   private:
      string brand;
      double volume;
      
   public:
      Soda(string, string, double, double);
      virtual string getDescricao();
   };

#endif