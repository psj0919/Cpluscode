#include <iostream>
using namespace std;

class Person
{
public:
    void Sleep()
    {
        cout << "Sleep"<<endl;
    }
};

class Student : public Person
{

public:
    void Study()
    {
        cout << "study"<<endl;
    }
};

class PartTimeStudent : public Student
{
public:
    void Work() 
    {
        cout << "Work"<<endl;
    }
};

int main()
{
    Person * ptr1 = new Student();
    Person * ptr2=new PartTimeStudent();
    Student * ptr3 = new PartTimeStudent();

    ptr1 -> sleep();
    ptr2 -> Sleep();
    ptr3 -> Study();
    delete prt1;
    delete prt2;
    delete prt3;
    return 0;
}
