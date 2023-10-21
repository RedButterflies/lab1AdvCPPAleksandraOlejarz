#include<iostream>
#include <utility>
#include "Dog.h"

Dog::Dog( string breed1, int levelOfGuideSkills1,int levelOfTrackerSkills1) {
    breed=std::move(breed1);
    if(levelOfGuideSkills1>=1&&levelOfGuideSkills1<=10) {
        levelOfGuideSkills = levelOfGuideSkills1;
    }
    else
    {
        cout<<"Wprowadzono wartosc spoza zakresu. Nie udalo sie ustawic wartosci. Wprowadz wartosc z zakresu <1,10>"<<endl;
    }
    if(levelOfGuideSkills1>=1&&levelOfGuideSkills1<=10) {
        levelOfTrackerSkills = levelOfTrackerSkills1;
    }
    else
    {
        cout<<"Wprowadzono wartosc spoza zakresu. Nie udalo sie ustawic wartosci. Wprowadz wartosc z zakresu <1,10>"<<endl;
    }
    //cout<<"Konstruktor inicjalizujacy tylko skladowe klasy Dog"<<endl;
}

Dog::Dog(int limbNr, string name, bool protectedAnimal) : Animal(limbNr, std::move(name), protectedAnimal) {

    //cout<<"Konstruktor inicjalizujący tylko składowe klasy Animal"<<endl;
}

Dog::Dog() = default;

void Dog::setSkillLevel(int type, int value) {
if (type==1)
{
    if(value>=1&&value<=10) {
        levelOfGuideSkills = value;
    }
    else
    {
        cout<<"Wprowadzono wartosc spoza zakresu. Wprowadz wartosc z zakresu <1,10>"<<endl;
    }


}
   if (type==2)
    {
        if(value>=1&&value<=10) {
            levelOfTrackerSkills = value;
        }
        else
        {
            cout<<"Wprowadzono wartosc spoza zakresu. Wprowadz wartosc z zakresu <1,10>"<<endl;
        }



    }
}

int Dog::getSkillLevel(int type) {
    if (type==1)
    {
        if(levelOfGuideSkills) {
            return levelOfGuideSkills;
        }
        else
        {
            return 0;
        }
    }
    if(type==2)
    {
        if(levelOfTrackerSkills) {
            return levelOfTrackerSkills;
        }
        else
        {
            return 0;
        }
    }
}

void Dog::giveVoice() {
    cout<<"Hau,hau"<<endl;
}

void Dog::info() {
   cout<<"Rasa psa: "<<breed<<endl;
   cout<<"Poziom umiejetnosci przewodnika: "<<levelOfGuideSkills<<endl;
   cout<<"Poziom umiejetnosci tropiciela: "<<levelOfTrackerSkills<<endl;
   cout<<endl;
   cout<<endl;
   cout<<endl;
}

void  Dog :: howManyTrackerDogs(Dog tab[], int size)
{
    Dog* trackerDogs;
    int number = 0;
    for(int i=0;i<size;i++)
    {
        if(tab[i].getSkillLevel(2)>tab[i].getSkillLevel(1))
        {
            number++;
        }
    }
    trackerDogs = new Dog[number];
    for(int i=0;i<size;i++)
    {
        if(tab[i].getSkillLevel(2)>tab[i].getSkillLevel(1))
        {
           trackerDogs[i]=tab[i];
        }
    }
    cout<<"Psy, ktorych poziom tropiciela jest wiekszy niz przewodnika"<<endl;
    for(int i=0;i<number;i++)
    {
        trackerDogs[i].info();
    }
}

