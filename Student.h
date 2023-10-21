#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include"Person.h"
class Student: public Person
{
private:
    string index;
public:
    Student(string name1, string surname1, int age1,string index1);
    Student();
    void setIndex(string newIndex);
    string getIndex();
    bool is_Phd();
    void showInfoStudent();

    Student(const char string[6], const char string1[9], int i);
};
#endif // STUDENT_H_INCLUDED