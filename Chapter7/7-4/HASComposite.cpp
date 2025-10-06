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
    Gun * pistol;
public:
    police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
    {

    }
    void PutHandcuff()
    {
        cout << "!"<<endl;
        handcuffs --;
    }
    ~police()
    {
        if(pistol != NULL)
        {
            delete pistol;
        }
    }
};

int main()
{
    police pman1(5, 3);
    pman1.shot();
    pamn1.PutHandcuff();

    police pman2(0, 3);
    pman2.shot();
    pamn2.PutHandcuff();  
    return 0;
}