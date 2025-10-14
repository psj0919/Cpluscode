#include <iostream>
using namespace std;

class First
{
public:
    virtual void MyFunc()
    {
        cout << "FirstFunc"<<endl;
    }
};

class Second : public First
{
public:
    virtual void MyFunc()
    {
        cout << "SecondFunc"<<endl;
    }
};

class Third : public Second
{
public:
    virtual void MyFunc()
    {
        cout << "ThirdFunc"<<endl;
    }
};

// 출력 
// ThirdFinc
// ThirdFinc
// ThirdFinc
// 포인터의 자료형을 기반으로 호출대상을 ㅕㄹ정하지 않고, 포인터 변수가 실제로 가리키는 객체를 참조하여 호출의 대상을 결정한다.