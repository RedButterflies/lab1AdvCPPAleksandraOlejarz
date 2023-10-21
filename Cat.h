#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED
#include"Animal.h"
class Cat: public Animal
{
private:
    int levelOfMouseHunting;
    int  mice[5];
public:
   Cat(int limbNr, string name, bool protectedAnimal);
   Cat ();
   void initMice();
   void initCat(int levelOfMouseHunting);
   void  setLevelOfMouseHunting(int value);
   int  getLevelOfMouseHunting();
   int getMice(int index);
   void giveVoice();
   void info();


   static void howManyCats(Cat tab[], int size);


};
#endif // CAT_H_INCLUDED