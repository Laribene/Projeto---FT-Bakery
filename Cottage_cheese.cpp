
#include <string>
#include "Cheese.hpp"
#include "Cottage_cheese.hpp"

using namespace std;

CottageCheese::CottageCheese(string type, string filling, float weight, double value) : Cheese(type, weight, value) {
       this->filling = filling;
   };
   
string CottageCheese::getDescricao() {
       return ("Cottage Cheese" + filling + " - " + Cheese::getDescricao());
   };
   
/* fim de arquivo */
