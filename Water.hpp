#ifndef WATER_H
#define WATER_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Water : public Liquid
   {
   private:
      string brand;
      double volume;
      
   public:
      Water(string, string, double, double);
      virtual string getDescricao();
   };
   
#endif
