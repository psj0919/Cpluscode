class MyFriendInfo
{

private:
    char * name;
    int age;
public:
    MyFriendInfo(char * frame, int fage) : age(fage)
    {
        name = new char[str(frame)+1];
        strcpy(name, frame);
    }
    void ShowMyFriendInfo()
    {
        cout << name << endl;
        cout << age << endl;
    }
    ~MyFriendInfo()
    {
        delete [] name;
    }
};

class MyFriendDetialInfo : public MyFriendInfo
{
private:
    char * addr;
    char * phone;
public:
    MyFriendDetialInfo(char * frame, int fage, char * adr, char * pnum) : MyFriendInfo(frame, fage)
    {
        addr = new char[strlen(adr) + 1];
        phone = new char[strlen(pnum)+1];
        strcpy(addr, adr);
        strcpy(phone, pnum);
    }
    void MyFriendDetialInfo()
    {
        ShowMyFriendInfo();
        cout << addr << endl;
        cout << phone << endl;
    }
    ~MyFriendInfo()
    {
        delete [] addr;
        delete [] phone;
    }
};
