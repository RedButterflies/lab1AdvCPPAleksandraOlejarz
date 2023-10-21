#include "Cat.h"

Cat::Cat(int limbNr1, string name1, bool protectedAnimal1) : Animal(limbNr1, name1, protectedAnimal1) {



}

Cat::Cat() {

}

void Cat::initMice() {
for (int i=0;i<5;i++)
{
    cout<<"Wprowadz liczbe myszy upolowanych przez kota w "<< i+1<<". roku: "<<endl;
    int num;
    cin>>num;
    mice[i]=num;



}
}

void Cat::initCat(int levelOfMouseHunting1) {
    if(levelOfMouseHunting1>=1&&levelOfMouseHunting1<=10)
    {
        levelOfMouseHunting = levelOfMouseHunting1;
    }
    else
    {
        cout<<"Wprowadzono wartosc umiejetnosci lowienia spoza zakresu <1,10>, sprobuj ponownie, wprowadzajac poprawna wartosc"<<endl;
    }

    for (int i=0;i<5;i++)
    {
        cout<<"Wprowadz liczbe myszy upolowanych w "<< i+1<<". roku: "<<endl;
        int num;
        cin>>num;
        mice[i]=num;



    }
}

void Cat::setLevelOfMouseHunting(int value) {
    if(value>=1&&value<=10)
    {
        levelOfMouseHunting = value;
    }
    else
    {
        cout<<"Wprowadzono wartosc umiejetnosci lowienia spoza zakresu <1,10>, sprobuj ponownie, wprowadzajac poprawna wartosc"<<endl;
    }
}

int Cat::getLevelOfMouseHunting() {
    return levelOfMouseHunting >= 1 && levelOfMouseHunting <= 10 ? levelOfMouseHunting : 0;
}

int Cat::getMice(int index) {
    if(index>=0&&index<5)
    {
        if(mice[index]) {
            return mice[index];
        };
    }
    else
    {
        return 0;
    }
}

void Cat::giveVoice() {
    cout<<"Miau, miau";
}

void Cat::info() {
  cout<<"Poziom umiejetnosci lowienia myszy kota: "<< getLevelOfMouseHunting()<<endl;
  for(int i=0;i<5;i++)
  {
      cout<<"Myszy upolowane przez kota w "<<i+1<<". roku"<<endl;
      if(mice[i]>0) {
          cout << mice[i] << endl;
      }
      else
      {
          cout<<0<<endl;
      }
  }
    cout<<"Dzwiek wydawany przez kota: "<<endl;
    giveVoice();
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
void Cat :: howManyCats(Cat tab[], int size)
{
    int micePerCat[size];
    for(int i=0;i<size;i++)
    {
        int sum=0;
        for(int j=0;j<5;j++)
        {
            sum+=tab[i].getMice(j);
        }
        micePerCat[i]=sum;

    }
    for(int i=0;i<size;i++)
    {
        cout<<"Kot nr "<<i+1<<". upolowal "<<micePerCat[i]<<" myszy w ciagu 5 lat"<<endl;
    }
}
