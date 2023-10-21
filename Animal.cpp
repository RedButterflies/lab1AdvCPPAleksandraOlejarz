#include<iostream>
#include <utility>
#include"Animal.h"
using namespace std;
Animal::Animal (int limbNr1, string name1, bool protectedAnimal1)
{
    limbNr = limbNr1;
    name = std::move(name1);
    protectedAnimal = protectedAnimal1;
    //cout<<"Konstruktor klasy bazowej - Animal"<<endl;
}
Animal::Animal() {
    //cout << "Konstruktor bez klasy bazowej Animal" << endl;
}
void Animal :: setLimbNr(int limbNr1)
{
    limbNr=limbNr1;
}

void Animal :: setName(string name1)
{
    name = name1;
}

void Animal ::  setLProtectedAnimal(bool protectedAnimal1)
{
    protectedAnimal = protectedAnimal1;
}

int Animal ::  getLimbNr()
{
    return limbNr;
}

string Animal:: getName()
{
    return name;
}

bool Animal :: getProtectedAnimal()
{
    return protectedAnimal;
}

void Animal :: giveVoice()
{
    cout << "Chrum, miau, hau, piiiii" <<endl;
}

void Animal:: info()
{
    cout<<"Nazwa: "<<name<<endl;
    cout<<"Liczba konczyn: "<<limbNr<<endl;
    cout<<"Czy zwierze jest chronione: ";
    if(protectedAnimal)
    {
        cout<<"tak"<<endl;
    }
    else
    {
        cout<<"nie"<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
}


 int Animal :: howManyProtectedAnimals(Animal tab[], int size)
{
    int number=0;
    for(int i=0;i<size;i++)
    {
        if(tab[i].getProtectedAnimal()==1)
        {
            number++;
        }
    }
    return number;
}

