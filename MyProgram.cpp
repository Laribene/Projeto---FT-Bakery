
#include <string>
#include <vector>
#include <iostream>
#include "MyProgram.hpp"
#include "MyBoolean.hpp"
#include "Menu.hpp"
#include "Food.hpp"
#include "Liquid.hpp"
#include "Beer.hpp"

#include "Bakery.hpp"

#include "Cracker.hpp"
#include "Filled_wafer.hpp"
#include "Cheese.hpp"
#include "Ham.hpp"
#include "Bread.hpp"

#include "Milk.hpp"
#include "Water.hpp"
#include "Soda.hpp"

#include "Pilsen.hpp"
#include "Malzbier.hpp"
#include "Ipa.hpp"
#include "Lager.hpp"
#include "Mortadella.hpp"
#include "Cottage_cheese.hpp"

using namespace std;

MyProgram::MyProgram(string name){        
   this->name = name;  
};

//FUNCOES SET
void MyProgram::setVerboseMode(MyBooleanClass * verboseMode) {
    this->verboseMode = verboseMode;
};

void MyProgram::setShortMessageMode(MyBooleanClass * shortMessageMode) {
    this->shortMessageMode = shortMessageMode;
};

//FUNCOES GET
MyBooleanClass * MyProgram::getVerboseMode(){
    return this->verboseMode;
};

 MyBooleanClass * MyProgram::getShortMessageMode(){
     return this->shortMessageMode;
 };
 

void MyProgram::start(){
   myMainList.clear();
   Information::wellcome("C++ Program " + name + " running!", shortMessageMode->getStatus());
   process();
   Information::bye(shortMessageMode->getStatus());
   clearAll();
};

void MyProgram::process(){
   vector<string> opcoes({ "Exit", "List Database", "Insert Items", "Clear All" });
   Menu menu("Main Menu", opcoes);
   int escolha = -1;
   
   while(escolha){
      escolha = menu.getEscolha();
 
      switch(escolha){
 	       case 1: { listItems();    }; break;
 	       case 2: { insertItems();  }; break;
      };
   };
};

void MyProgram::clearAll(){

   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      //delete (*scan++);
      //(or)
        delete (*scan);
        *scan = NULL;
        scan++;
      };
  myMainList.clear();

    delete verboseMode;
    delete shortMessageMode;
    verboseMode = NULL;
    shortMessageMode = NULL;      
};


void MyProgram::listItems(){
   double total = 0.00;
      
   cout << "------------------------------\nItems in Database:\n------------------------------\n";
   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getvalue() << endl;
      total +=  (*scan)->getvalue();
      scan++;
      };
   cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
};

void MyProgram::insertItems(){
   cout << "------------------------------\nInsert New Items:\n------------------------------\n";
  
   Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella", "Milk" ,"Water","Soda", "Beers"  });
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
 
      switch(escolha)
         {
 	 case 1:  { insertBread();         }; break;
 	 case 2:  { insertCheese();        }; break;
 	 case 3:  { insertCottageCheese(); }; break;
 	 case 4:  { insertCracker();       }; break;
 	 case 5:  { insertFilledWafer();   }; break;
 	 case 6:  { insertHam();           }; break;
 	 case 7:  { insertMortadella();    }; break;
 	 case 8:  { insertMilk();  		   }; break;
 	 case 9:  { insertWater(); 		   }; break;
 	 case 10: { insertSoda(); 		   }; break;
 	 case 11: { insertBeers();  	   }; break;
         };
      };
   };

void MyProgram::insertBread() {
   Bread * bread;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Bread:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   bread = new Bread(type, weight,cost);
   myMainList.insert(myMainList.end(), bread);
   
   cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getvalue() << endl;   
   };
   
void MyProgram::insertCracker(){
   Cracker * cracker;
   string buffer;
   string type;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cracker = new Cracker(type, amount,cost);
   myMainList.insert(myMainList.end(), cracker);
   
   cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getvalue() << endl;   
};

void MyProgram::insertFilledWafer(){
   FilledWafer * filledWafer;
   string buffer;
   string type;
   string filling;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, type); 
   cout << "Filling ...: "; getline(cin, filling);
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   filledWafer = new FilledWafer(type, filling, amount,cost);
   myMainList.insert(myMainList.end(), filledWafer);
   
   cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getvalue() << endl;   
};

void MyProgram::insertHam(){
   Ham * ham;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   ham = new Ham(type, weight,cost);
   myMainList.insert(myMainList.end(), ham);
   
   cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getvalue() << endl;   
};

void MyProgram::insertMortadella() {
   Mortadella * mortadella;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   mortadella = new Mortadella(type, weight,cost);
   myMainList.insert(myMainList.end(), mortadella);
   
   cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getvalue() << endl;   
   };

void MyProgram::insertCheese(){
   Cheese * cheese;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cheese = new Cheese(type, weight,cost);
   myMainList.insert(myMainList.end(), cheese);
   
   cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getvalue() << endl;   
};

void MyProgram::insertCottageCheese(){
   CottageCheese * cottageCheese;
   string buffer;
   string type;
   string filling;
   float  amount;
   double cost;

   cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
   cout << "Filling ...: "; getline(cin, filling);
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cottageCheese = new CottageCheese(type,filling, amount,cost);
   myMainList.insert(myMainList.end(), cottageCheese);
   
   cout << endl << cottageCheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottageCheese->getvalue() << endl;   
};

void MyProgram::insertMilk(){
   Milk * milk;
   string buffer;
   double volume;
   string brand;
   double cost;
   string type;

   cout << "------------------------------\nInsert Milk:\n------------------------------\n";
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Volume......: "; getline(cin, buffer); volume  = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   milk = new Milk(type, brand, volume, cost);
   myMainList.insert(myMainList.end(), milk);
   
   cout << endl << milk->getDescricao() << " - US$ " << fixed << setprecision(2) << milk->getvalue() << endl;   
};


void MyProgram::insertWater(){
   Water * water;
   string buffer;
   double volume;
   string brand;
   double cost;
   string type;

   cout << "------------------------------\nInsert Water:\n------------------------------\n";
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Volume......: "; getline(cin, buffer); volume  = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   water = new Water(type, brand, volume, cost);
   myMainList.insert(myMainList.end(), water);
   
   cout << endl << water->getDescricao() << " - US$ " << fixed << setprecision(2) << water->getvalue() << endl;   
};

void MyProgram::insertSoda(){
   Soda * soda;
   string buffer;
   double volume;
   string brand;
   double cost;
   string type;

   cout << "------------------------------\nInsert Soda:\n------------------------------\n";
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Volume......: "; getline(cin, buffer); volume  = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   soda = new Soda(type, brand, volume, cost);
   myMainList.insert(myMainList.end(), soda);
   
   cout << endl << soda->getDescricao() << " - US$ " << fixed << setprecision(2) << soda->getvalue() << endl;   
};

void MyProgram::insertBeers() {
   
    Menu menu("Insert Beer", {"Exit", "Pilsen", "Malzbier", "IPA", "Lager"});
    int escolha = -1;

    while (escolha)
    {
        escolha = menu.getEscolha();

        switch (escolha) {
            case 1: { insertPilsen();     };break;
            case 2: { insertMalzbier();   };break;
            case 3: { insertIPA();        };break;
            case 4: { insertLager();      };break;
        };
    };
};

void MyProgram::insertPilsen() {
   Pilsen * pilsen;
   string buffer;
   float volume;
   string brand;
   double cost;
   string type;

   cout << "------------------------------\nInsert Pilsen:\n------------------------------\n";
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Volume......: "; getline(cin, buffer); volume  = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   
   pilsen = new Pilsen(brand,volume, brand, type, cost);
   myMainList.insert(myMainList.end(), pilsen);
   
   cout << endl << pilsen->getDescricao() << " - US$ " << fixed << setprecision(2) << pilsen->getvalue() << endl; 
};

void MyProgram::insertMalzbier() {
    
   Malzbier * malzbier;
   string buffer;
   float volume;
   string brand;
   double cost;
   string type;

   cout << "------------------------------\nInsert Malzbier:\n------------------------------\n";
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Volume......: "; getline(cin, buffer); volume  = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   
   malzbier = new Malzbier(brand,volume, brand, type, cost);
   myMainList.insert(myMainList.end(), malzbier);
   
   cout << endl << malzbier->getDescricao() << " - US$ " << fixed << setprecision(2) << malzbier->getvalue() << endl; 
};

void MyProgram::insertIPA() {
    
   IPA * ipa;
   string buffer;
   float volume;
   string brand;
   double cost;
   string type;

   cout << "------------------------------\nInsert IPA:\n------------------------------\n";
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Volume......: "; getline(cin, buffer); volume  = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   
   ipa = new IPA(brand,volume, brand, type, cost);
   myMainList.insert(myMainList.end(), ipa);
   
   cout << endl << ipa->getDescricao() << " - US$ " << fixed << setprecision(2) << ipa->getvalue() << endl; 
};

void MyProgram::insertLager() {
    
   Lager * lager;
   string buffer;
   float volume;
   string brand;
   double cost;
   string type;

   cout << "------------------------------\nInsert Lager:\n------------------------------\n";
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Volume......: "; getline(cin, buffer); volume  = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   
   lager = new Lager(brand,volume, brand, type, cost);
   myMainList.insert(myMainList.end(), lager);
   
   cout << endl << lager->getDescricao() << " - US$ " << fixed << setprecision(2) << lager->getvalue() << endl; 
};



