#include <iostream>
using namespace std;

class TwoNumber
{

private:
    int num1;
    int num2;
public:
    TwoNumber(int n1, int n2): num1(n1), num2(n2)
    {   
        this -> num1 = num1;
        this -> num2 = num2;
    }
    void ShowData() 
    {
        cout << this -> num1 << endl;
        cout << this -> num2 << endl;
    }
};

int main()
{
    TwoNumber two(10, 20);
    two.ShowData();
    return 0;
}