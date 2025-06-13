# '참'을 의미하는 true와 '거짓'을 의미하는 false
#include <iostream>
using namespace std;

int main(void)
{
    int num = 10
    int i = 0;

    cout << "true: " << true << endl;  --> true: 1
    cout << "false: " << false << endl;  --> false: 0

    while (true)
    {
        cout << 1++ << ' ';
        if (i > num)
        {
            break;
        }
    } --> 0 1 2 3 4 5 6 7 8 9 10 --> C언어에서는 무한루프를 형성하기 위해서 일반적으로 숫자 1을 사용. C++에서도 물론 숫자 1을 사용할 수 있지만, true를 대신 사용할 수도 있다.

    cout << "sizeof 1: " << sizeof(1) << endl; --> sizeof 1: 4
    cout << "sizeof 0: " << sizeof(0) << endl; --> sizeof 0: 4
    cout << "sizeof true: " << sizeof(1) << endl; --> sizeof true: 1
    cout << "sizeof false: " << sizeof(0) << endl; --> sizeof false: 1 
    return 0;
}

# 자료형 bool

#include <iostream>
using namespace std;

bool IsPositive(int num)
{
    if (num <= 0)
        return false;
    else
        return true;
}

int main(void)
{
    bool isPos;
    int num;
    cout << "Input number: ";
    cin >> num;    // 12

    isPos = IsPositive(num); --> true
    if (isPos)
        cout << "Positive number" << endl;  isPos == 1
    else
        cout << "Negative number" << endl;
    
    return 0;
}