#ifndef MILK_H
#define MILK_H


#include <string>
#include "Liquid.hpp"

using namespace std;

class Milk : public Liquid
   {
   private:
      string brand;
      double volume;
      
   public:
      Milk(string, string, double, double);
      virtual string getDescricao();
   };
   
#endif