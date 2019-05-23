

#ifndef CHEESE_H
#define CHEESE_H

#include <string>
#include "Food.hpp"

using namespace std;

class Cheese : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Cheese(string, float, double);
      virtual string getDescricao();
   };
   
#endif
