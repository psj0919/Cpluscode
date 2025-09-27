#include <iostream>
using namespace std;

class Simpleclass
{
private:
    int num1;
    int num2;
public:
    Simpleclass(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void ShowData() const
    {
        cout << num1 <<' '<<num2 << endl;
    }

}

int main()
{
    Simpleclass sc();
    SimpleClass mysc = sc1();
    mysc.ShowData();
    return 0;
}

SimpleClass sc1()
{
    SimpleClass sc(20, 30);
    return sc;
}