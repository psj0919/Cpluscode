#inlcude <iostream>
using namespace std;

class BaseOne
{
public:
    void SimpleFuncOne()
    {
        cout << "BaseOne" <<endl;
    }
};

class BaseTwo
{

public:
    void simpleFuncTwo()
    {
        cout << "BaseTwo"<<endl;
    }

};

class MultiDerived : public BaseOne, protected BaseTwo
{
public:
    void complexFunc()
    {
        BaseOne::SimpleFuncOne();
        BaseTwo::simpleFuncTwo();
    }
};

int main()
{
    MultiDerived mdr;
    mdr.complexFunc();
    return 0;
}
