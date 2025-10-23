#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
    int bullet;
public:
    Gun(int bnum) : bullet(bnum)
    { }
    void Show()
    {
        bullet --;
    }
};

class Police
{

private:
    int handcuffs;
    Gun * pistol;
public:
    Police(int bnum, int bcuff) : handcuffs(bcuff)
    {
        if (bnum > 0)
        {
            pistol = new Gun(bnum);
        }
        else
        {
            pistol=NULL;
        }
        void PutHandcuff()
        {
            handcuffs --;
        }
        void Shot()
        {
            if (pistol==NULL)
            {
                cout << "Hut" << endl;
            }
            else
            {
                pistol -> Shot();
            }
        }
        ~Police()
        {
            if(pistol!=NULL)
            {
                delete pistol;
            }
        }
    }



}
