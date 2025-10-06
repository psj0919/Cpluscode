#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
    int bullet;
public:
    Gun(int bnum) : bullet(bnum)
    {

    }
    void shot()
    {
        cout << "!" << endl;
        bullet --;
    }
};

class police : public Gun
{
private:
    int handcuffs;
public:
    police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
    {

    }
    void PutHandcuff()
    {
        cout << "!"<<endl;
        handcuffs --;
    }
};

int main()
{
    police pman(5, 3);
    pman.shot();
    pman.PutHandcuff();
    return 0;

}