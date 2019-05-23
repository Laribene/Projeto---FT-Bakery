
#include <string>
#include "Food.hpp"
#include "Liquid.hpp"

using namespace std;

Liquid::Liquid(string type, double value) : Food(value){
   this->type = type;
};
