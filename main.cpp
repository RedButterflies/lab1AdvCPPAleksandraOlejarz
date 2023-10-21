#include <iostream>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"


using namespace std;
int main()
{
    Student s1[3];
    Student* s2;
    Student* s3[3];
    Student** s4;
    for(int i=0; i<3; i++)
    {
        s1[i].init("Anna","Nowak",20+i);
        s1[i].setIndex("99208");
        s1[i].showInfoStudent();
    }
    s2=new Student[3];
    for(int i=0; i<3; i++)
    {
        s2[i].init("Ola","Adamek",20+i);
        s2[i].setIndex("99208");
        s2[i].showInfoPerson();
    }
    for(int i=0; i<3; i++)
    {
        s3[i]=new Student("Kasia","Kowalska",20+i);
        s3[i]->setIndex("99208");
        s3[i]->showInfoPerson();
    }
    s4=new Student*[3];
    for(int i=0; i<3; i++)
    {
        s4[i]=new Student("Pawel","Wojcik",20+i);
        s4[i]->setIndex("99208");
        s4[i]->showInfoPerson();
    }
    for(int i=0;i<3;i++){
        delete s3[i];
    }
    for(int i=0;i<3;i++){
        delete s4[i];
    }
    delete [] s4;


    Person p1[3];
    Person* p2;
    Person* p3[3];
    Person** p4;
    for(int i=0; i<3; i++)
    {
        p1[i].init("Anna","Nowak",20+i);
        p1[i].showInfoPerson();
    }
    p2=new Person[3];
    for(int i=0; i<3; i++)
    {
        p2[i].init("Ola","Adamek",20+i);
        p2[i].showInfoPerson();
    }
    for(int i=0; i<3; i++)
    {
        p3[i]=new Person("Kasia","Kowalska",20+i);
        p3[i]->showInfoPerson();
    }
    p4=new Person*[3];
    for(int i=0; i<3; i++)
    {
        p4[i]=new Person("Pawel","Wojcik",20+i);
        p4[i]->showInfoPerson();
    }
    for(int i=0;i<3;i++){
        delete p3[i];
    }
    for(int i=0;i<3;i++){
        delete p4[i];
    }
    delete [] p4;




    cout<<endl<<"Obiekty klasy Person"<<endl;
    Person o1("Grazyna","Nowak",45);
    o1.showInfoPerson();
    cout<<"Czy pelnoletnia?: "<<o1.is_18()<<endl;
    o1.setAge(16);
    cout<<endl<<"Obiekty klasy Teacher"<<endl;
    Teacher n1("Barbara","Kowalska",56,30,"Phd");
    n1.showInfoTeacher();
    cout<<"Czy ma Phd?: "<<n1.is_Phd()<<endl;
    n1.setAge(34);



    //test klasy Animal
    Animal a1= Animal();
    Animal a2 = Animal(3,"butterfly");
    Animal a3 = Animal(4,"frog",false);

    a1.info();
    a2.info();
    a3.info();

    a1.setLimbNr(4);
    a1.setName("hamster");
    a1.setLProtectedAnimal(false);

    a1.info();
    a2.info();
    a3.info();

    cout<<"a1 name: "<<a1.getName()<<endl;
    cout<<"a1 limb number: "<<a1.getLimbNr()<<endl;
    cout<<"Czy zwierze a1 jest chronione?"<<endl;
    if(a1.getProtectedAnimal())
    {
        cout<<"tak";
    }
    else
    {
        cout<<"nie";
    }


    cout<<endl;
    cout<<endl;
    cout<<endl;


    //testowanie klasy Dog
    Dog d1 = Dog("pomeranian",8,7);
    Dog d2 = Dog("pomeranian",11,12);
    Dog d3 = Dog(4,"dog",true);
    Dog d4 = Dog();
    cout<<endl;
    cout<<endl;
    cout<<endl;


    d1.info();
    d2.info();
    d3.info();
    d4.info();

    d2.setSkillLevel(1,3);
    d3.setSkillLevel(1,8);
    d4.setSkillLevel(1,9);
    d2.setSkillLevel(2,9);
    //trackerSkills nie ustawione dla d3
    d4.setSkillLevel(2,7);

    d1.info();
    d2.info();
    d3.info();
    d4.info();


    cout<<"Poziom umiejetnosci przewodnika psa d1: "<<d1.getSkillLevel(1)<<endl;
    cout<<"Poziom umiejetnosci tropiciela psa d2: "<<d1.getSkillLevel(2)<<endl;
    cout<<"Poziom umiejetnosci tropiciela psa d3: "<<d3.getSkillLevel(2)<<endl;

    d1.giveVoice();

    Dog dog1("pudelek",8,10);
    cout<<dog1.getSkillLevel(1)<<endl;
    cout<<dog1.getSkillLevel(2)<<endl;
    dog1.info();
    dog1.giveVoice();

    //testowanie klasy Cat

    Cat c1 = Cat (4,"cat",false);
    Cat c2 = Cat();
    c1.initMice();
    c2.initMice();
    c1.info();
    c2.info();
    c1.initCat(9);
    //nie ustawiony poziom lowienia myszy dla kota c2

    cout<<"Poziom umiejetnosci lowienia myszy kota c1: "<<c1.getLevelOfMouseHunting()<<endl;
    cout<<"Poziom umiejetnosci lowienia myszy kota c2: "<<c2.getLevelOfMouseHunting()<<endl;

    cout<<"Myszy zlowione przez kota c1 w roku 5. : "<<c1.getMice(5)<<endl;
    cout<<"Myszy zlowione przez kota c2 w roku 3. : "<<c1.getMice(3)<<endl;

    c1.giveVoice();
    c2.giveVoice();

    c1.info();
    c2.info();



    Cat cat1(4,"Jozef",1);
    cat1.initCat(8);
    cat1.getMice(5);
    cat1.setLevelOfMouseHunting(7);
    cat1.info();

    Animal aniTab[6];
    for(int i=0;i<3;i++)
    {
        aniTab[i]=Animal(6,"spider");
    }
    for(int i=3;i<6;i++)
    {
        aniTab[i]=Animal(6,"spider",false);
    }

    Dog dogTab[7];
    dogTab[0]=Dog("husky",8,9);
    dogTab[1]=Dog("pomeranian",7,8);
    dogTab[2]=Dog("labrador",3,9);
    dogTab[3]=Dog("pekin dog",5,1);

    for (int i=4;i<7;i++)
    {
        dogTab[i]=Dog("york",6,3);
    }


    Cat catTab[3];
    for(int i=0;i<3;i++)
    {
        catTab[i]= Cat();
    }
    for(int i=0;i<3;i++)
    {
        catTab[i].initCat(5);

    }

    cout<<Animal::howManyProtectedAnimals(aniTab,6)<<endl;
    Dog::howManyTrackerDogs(dogTab,7);
    Cat::howManyCats(catTab,3);






}