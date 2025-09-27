#include <iostream>
using namespace std;

class NameCard
{
private:
    char * name;
    char * company;
    char * phone;
    char * rank;
public:
    NameCard(char * myname, char * mycompany, char * myphone, char *rank) : name(myname), company(mycompany), phone(myphone), rank(rank)
    {   }
    void ShowNameCardInfo() const
    {
        cout << "name: " << name << endl;
        cout << "company: " << company << endl;
        cout << "phone: " << phone << endl;
        cout << "rank: " << rank << endl;
    }
    
}