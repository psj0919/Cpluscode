#include <iostream>
using namespace std;

class First
{
public:
    void MyFunc() 
    {
        cout << "FirstFunc"<<endl;
    }
};

class Second : public First
{
public:
    void MyFunc()
    {
        cout << "SecondFunc"<<endl;
    }
};

class Third : public Second
{
public:
    void MyFunc()
    {
        cout << "ThirdFinc"<<endl;
    }
};

int main()
{
    Third * tptr = new Third();
    Second * sptr = tptr;
    Third * fptr = sptr;

    fptr -> MyFunc();
    sptr -> MyFunc();
    tptr -> MyFunc();
    delete tptr;
    return 0;
}



// 출력 
// FirstFunc
// SecondFunc
// ThirdFinc