#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy
{

private:
    int height;
    friend class Girl;
public:
    Boy(int len) : height(len)
    {}
    void ShowYoutFriendInfo(Girl & frn);
};

class Girl
{

private:
    char phnum[20];
public:
    Girl(char * num)
    {
        strcpy(phnum, num);
    }
    void ShowYoutFriendInfo(Boy &frn)
    {
        cout <<"His height : "<< frn.height << endl;
    }
};

int main()
{
    Boy boy(170);
    Girl girl("010-1111-2222");
    boy.ShowYoutFriendInfo(girl);
    girl.ShowYoutFriendInfo(boy);
    return 0;
}