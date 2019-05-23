using namespace std;

//#ifndef MYPROGRAM_H
//#define MYPROGRAM_H

#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "MyBoolean.hpp"
#include "Food.hpp"
#include "Beer.hpp"


class MyProgram {

    private:
        string name ;


        MyBooleanClass * verboseMode =      NULL;
        MyBooleanClass * shortMessageMode = NULL;
        vector<Food *> myMainList;

        void process(void);
        void clearAll(void);

        void listItems(void);
        void insertItems(void);
        void insertBread(void);
        void insertCracker(void);
        void insertFilledWafer(void);
        void insertHam(void);
        void insertMortadella(void);
        void insertCheese(void);
        void insertCottageCheese(void);
        void insertMilk(void);
        void insertWater(void);
        void insertSoda(void);
        void insertBeers(void);
        void insertPilsen(void);
        void insertMalzbier(void);
        void insertIPA(void);
        void insertLager(void);
        

    public:

        MyProgram(string name);
        ~MyProgram();
        void start();

        MyBooleanClass *getVerboseMode();
        MyBooleanClass *getShortMessageMode();

        void setShortMessageMode(MyBooleanClass * shortMessageMode);
        void setVerboseMode(MyBooleanClass * verboseMode);
        
};

//#endif
