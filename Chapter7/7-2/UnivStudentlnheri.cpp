#include <iostream>
using namespace std;

class Person
{

private:
    int age;
    char name[50];
public:
    Person(int myage, char * myname) : age(myage)
    {
        strcpy(name, myname);
    }
    void WhatYourName() const
    {
        cout << name << endl;
    }
    void HowOldAreYou() const
    {
        cout << age << endl;
    }
};

class UnivStudent : public Person
{
private:
    char major[50];
public:
    UnivStudent(char * myname, int myage, char * mymajor) : Person(myage, myname)
    {
        strcpy(major, mymajor);
    }
    void WhoAreYou() const
    {
        WhatYourName();
        HowOldAreYou();
        cout << major << endl;
    }

}

int main()
{
    UnivStudent ustd11("Lee", 22, "Computer");
    ustd11.WhoAreYou();

    UnivStudent ustd12("J", 22, "Ele");
    ustd12.WhoAreYou();
    return 0;
}