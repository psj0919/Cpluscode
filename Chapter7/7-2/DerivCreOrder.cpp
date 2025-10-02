#include <iostream>
using namespace std;

class SoBase
{
private:
    int baseNum;
public:
    SoBase() : baseNum(20)
    {
        cout << " " << endl;
    }
    SoBase(int n) : baseNum(n)
    {
        cout << "int n" << endl;
    }
    void ShowBaseData()
    {
        cout <<baseNum<<endl;
    }
};

class SoDerived : public SoBase
{
private:
    int derivNum;
public:
    SoDerived() : derivNum(30)
    {
        cout <<" " << endl;
    }
    SoDerived(int n) : derivNum(n)
    {
        cout << "int n" << endl;
    }
    SoDerived(int n1, int n2) : SoBase(n1) , derivNum(n2)
    {
        cout << "int n1 n2" << endl;
    }
    void ShowDerivData()
    {
        ShowBaseData();
        cout << derivNum << endl;
    }
};

int main()
{
    SoDerived dr1;
    dr1.ShowDerivData();

    SoDerived dr2(12);
    dr2.ShowDerivData();

    SoDerived dr3(12, 13);
    dr3.ShowDerivData();
    return 0; 
}
