

#include <string>
#include "Liquid.hpp"
#include "Beer.hpp"

using namespace std;

Beer::Beer(string brand, string type, double value) : Liquid(type, value){
   this->brand = brand;
};

string Beer::getBrand()
{
    return brand;
};

void Beer::setBrand(string brand)
{
    this->brand = brand;
}
