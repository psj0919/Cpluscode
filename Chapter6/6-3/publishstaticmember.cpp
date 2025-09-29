#include <iostream>
using namespace std;

class sosimple
{
private:
    static int simobjcnt;
public:
    sosimple()
    {
        simobjcnt++;
    }
};
int sosimple::simobjcnt=0;
int main()
{
    cout << sosimple::simobjcnt << "" <<endl;
    sosimple sim1;
    sosimple sim2;

    cout << "" <<endl;
    return 0;

}