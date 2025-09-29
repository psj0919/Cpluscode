#include <iostream>
using namespace std;

class sosimple
{
private:
    static int simobject;
public:
    sosimple()
    {
        simobjcnt++;
        cout << " "<<endl;
    }
};
int sosimple::simobjcnt=0;

class socomplex
{
private:
    static int cmxobjcnt;
public:
    socomplex()
    {
        cmxobjcnt++;
        cout << " " << endl;
    }
    socomplex(socomplex &copy)
    {
        cmxobjcnt++;
        cout << " " << endl;
    }
};

int socomplex::cmxobjcnt = 0;

int main()
{
    sosimple sim1;
    sosimple sim2;

    socomplex cmx1;
    socomplex cmx2 = cmx1;
    socomplex();
    return 0;

}