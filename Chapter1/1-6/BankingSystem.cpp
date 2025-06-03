// Banking System Program

# include <iostream>
#include <cstring>

using namespace std;
void makeAccount();
void Depositmoney();
void Withdrawmoney();
void ShowAccountInfo();
int accIC;
int balance;
char cusnum[20];

int accArr[100];
char cusname[100][20];
int accbal[100];
int accNum = 0;

int main()
{
    int choice;
    while (1)
    {
        cout << "1. 계좌개설"<< endl;
        cout << "2. 입금"<< endl;
        cout << "3. 출금"<< endl;
        cout << "4. 계좌정보 전체 출력"<< endl;
        cout << "5. 프로그램 종료"<< endl;

        cout << "선택: ";
        cin >> choice;
        cout << endl;
        
        switch (choice)
        {
            case 1:

                makeAccount();
                break;
            case 2:
                Depositmoney();
                break;
            case 3:
                Withdrawmoney();
                break;
            case 4:
                ShowAccountInfo();
                break;
            case 5:
                return 0; // 프로그램 종료
        }
    }
}

void makeAccount()
{
    int id;
    char name[20];
    int balance;
    cout <<"계좌ID:"; cin>> id;
    cout <<"이름:"; cin>> name;
    cout <<"잔액:"; cin>> balance;
    
    accArr[accNum] = id;
    strcpy(cusname[accNum], name);
    accbal[accNum] = balance;
    accNum++;
}
void Depositmoney()
{
    int id;
    int money;
    cout <<"입금:"<<endl;
    cout <<"계좌:"; cin>> id;
    cout <<"입금액:"; cin>> money;
    
    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i] == id)
        {
            accbal[i] += money;
            cout << "입금 완료" << endl;
            return;
        }
    }
}
void Withdrawmoney()
{
    int id;
    int money;
    cout <<"출금:"<<endl;
    cout <<"계좌:"; cin>> id;
    cout <<"출금액:"; cin>> money;
    
    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i] == id)
        {
            if (accbal[i] >= money)
            {
                accbal[i] -= money;
                cout << "출금 완료" << endl;
            }
            else
            {
                cout << "잔액 부족" << endl;
            }
            return;
        }
    }
}

void ShowAccountInfo(void)
{
    for (int i = 0; i < accNum; i++)
    {

        cout << "계좌ID: " << accArr[i] << endl;
        cout << "이름: " << cusname[i] << endl;
        cout << "잔액: " << accbal[i] << endl;
        return;
        
    }
}