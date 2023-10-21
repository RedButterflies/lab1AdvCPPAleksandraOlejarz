#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
using namespace std;

class Animal
{
private:
    int limbNr;
    string name;
    bool protectedAnimal;
public:
    Animal();
    Animal(int limbNr, string name, bool protectedAnimal=true);

    void setLimbNr(int limbNr1);
    void setName(string name1);
    void setLProtectedAnimal(bool protectedAnimal1);

    int getLimbNr();
    string getName();
    bool getProtectedAnimal();

    void giveVoice();
    void info();


    static int howManyProtectedAnimals(Animal tab[], int size);
};
#endif // ANIMAL_H_INCLUDED
