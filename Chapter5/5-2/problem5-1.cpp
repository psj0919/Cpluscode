#include <iostream>
using namespace std;

namespace COMP_POS
{
    enum {CLERK, SENIOR, ASSIST, MANAGER};

    void ShowPositionInfo(int pos)
    {
        switch(pos)
        {
            case COMP_POS::CLERK:
                cout << "사원" << endl;
                break;
            case COMP_POS::SENIOR:
                cout << "주임" << endl;
                break;
            case COMP_POS::ASSIST:
                cout << "대리" << endl;
                break;
            case COMP_POS::MANAGER:
                cout << "과장" << endl;
                break;
        }
    }
}

class NameCard
{
private:
    char * name;
    char * company;
    char * phone;
    int position;
public:
    NameCard(char * myname, char * mycompany, char * myphone, int pos) : position(pos)
    {
        int len = strlen(myname)+1;
        name = new char[len];
        strcpy(name, myname);
        len = strlen(mycompany)+1;
        company = new char[len];
        strcpy(company, mycompany);
        len = strlen(myphone)+1;
        phone = new char[len];
        strcpy(phone, myphone);
        position = pos;
    }
    NameCard (const NameCard & copy) : position(copy.position)
    {
        int len = strlen(copy.name)+1;
        name = new char[len];
        strcpy(name, copy.name);
        len = strlen(copy.company)+1;
        company = new char[len];
        strcpy(company, copy.company);
        len = strlen(copy.phone)+1;
        phone = new char[len];
        strcpy(phone, copy.phone);
        position = copy.position;
    }
    void ShowNameCardInfo() const
    {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << phone << endl;
        cout << "직급: "; COMP_POS::ShowPositionInfo(position);
        cout << endl;
    }
    ~NameCard()
    {
        delete []name;
        delete []company;
        delete []phone; 
        cout << "called destructor!" << endl;
    }

};


int main()
{
    NameCard manClerk("LEE", "ABCENG", "010-1234-1234", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSENIOR("HONG", "ORANGE", "010-1234-5678", COMP_POS::SENIOR);
    NameCard copy2 = manSENIOR;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
    return 0;
}