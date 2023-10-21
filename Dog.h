#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED
#include"Animal.h"
class Dog: public Animal
{
private:
    string breed;
    int levelOfGuideSkills{};
    int levelOfTrackerSkills{};
public:
    Dog(string breed, int levelOfGuideSkills, int levelOfTrackerSkills);
    Dog(int limbNr, string name, bool protectedAnimal);
    Dog();
    void setSkillLevel(int type, int value);
    int getSkillLevel(int type);
    void giveVoice();
    void info();

    static void howManyTrackerDogs(Dog[], int size);

};
#endif // DOG_H_INCLUDED