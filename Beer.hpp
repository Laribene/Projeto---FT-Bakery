#ifndef BEER_H
#define BEER_H


#include <string>
#include "Liquid.hpp"

using namespace std;

class Beer : public Liquid{
   private:
      string brand;
      
      
   public:
      Beer(string, string, double);
      
      string getBrand();
      void setBrand(string);
      
   };
   
#endif
