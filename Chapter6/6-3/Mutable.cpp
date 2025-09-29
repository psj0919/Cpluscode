#include <iostream>
using namespace std;

class sosimple
{
private:
    int num1;
    mutable int num2;
public:
    sosimple(int n1, int n2) : num1(n1), num2(n2)
    {}
    void ShowSimpleData() const
    {
        cout << " " << endl;
    }
    void CopyToNum2()
    {
        num2 = num1;
    }
};
int main()
{
    sosimple sm(1, 2);
    sm.ShowSimpleData();
    sm.CopyToNum2();
    sm.ShowSimpleData();
    return 0;
}