

#ifndef COTTAGE_CHEESE_H
#define COTTAGE_CHEESE_H

#include <string>
#include "Cottage_cheese.hpp"

using namespace std;

class CottageCheese : public Cheese
   {
   private:
      string filling;
      
   public:
      CottageCheese(string, string, float, double);
      virtual string getDescricao();
   };
   
#endif
