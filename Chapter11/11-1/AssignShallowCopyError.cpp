#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char * name;
    int age;
public:
    Person(char * myname, int myage)
    {
        int len = strlen(myname)+1;
        name = new char [len];
        strcpy(name, myname);
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout << name << endl;
        cout << age << endl;
    }
    ~Person()
    {
        delete []name;
        cout <<"call d"<<endl;
    }
};

int main()
{
    Person man1("LEE", 29);
    Person man2("Yoon",22);
    man2 = man1;
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}
