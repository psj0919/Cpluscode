#include <iostream>
#inclde <cstring>
using namespace std;

class Sosimpe
{
private:
    int num;
public:
    Sosimpe(int n): num(n)
    {
        cout << "num" << num << ", ";
        cout << "address" << this << endl;
    }
    void ShowSimpleData()
    {
        cout << num << endl;
    } 
    Sosimpe * GetThisPointer()
    {
        return this;
    }
}

int main()
{
    Sosimpe sim(100);
    Sosimpe * psim = sim.GetThisPointer();
    psim->ShowSimpleData();
    return 0;
}