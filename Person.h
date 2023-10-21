#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    string surname;
    int age;
public:
    Person(string name1, string surname1, int age1);
    Person();
    void setAge(int age1);
    string getSurname();
    bool is_18();
    void showInfoPerson();

    void init(const char *string, const char *string1, int i);
};
#endif // PERSON_H_INCLUDED
