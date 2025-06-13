# 참조자(Reference)의 이해
--> 변수는 할당된 메모리 공간에 붙여진 이름. 그리고 그 이름을 통해서 해당 메모리 공간에 접근이 가능함.
int num1 = 2010; --> 위의 변수 선언을 통해서 2010으로 초기화 된 메모리 공간에 num1이라는 이름이 붙게 됨.

int &num2 = num1; --> 다음과 같은 문장을 실행하면, num1이라는 이름이 붙어있는 메모리 공간에는 num2라는 이름이 하나 더 붙게 된다.

int *ptr = &num1; --> 변수 num1의 주소 값을 반환해서 포인터 ptr에 저장.
int &num2 = num1; --> 변수 num1에 대한 참조자 num2를 선언.  num2는 num1의 참조자가 됨.

위의 문장을 실행한 뒤, num2=3047을 실행하여
cout <<num1<<endl;
cout <<num2<<endl;  --> 이렇게 실행하면 3047이 출력되는 것을 확인할 수 있다.

#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 1020;
    int &num2=num1;

    num2=3047;
    cout <<"VAL: " <<num1<<endl; --> 3047
    cout <<"REF: " <<num2<<endl; --> 3047

    cout <<"VAL: " <<&num1<<endl;  --> 0012FF60
    cout <<"REF: " <<&num2<<endl;  --> 0012FF60

    return 0;
}

# 참조자는 별칭.
- 변수에 별명(별칭)을 하나 붙여주는 것.
int &num2 = num1;
--> num1 이 변수의 이름이라면, num2는 num1의 별명이라는 뜻.

# 참조자의 수에는 제한이 없으며, 참조자를 대상으로도 참조자를 선언할 수 있다.
int num1 = 2759;
int &num2 = num1;
int &num3 = num1;
int &num4 = num1;
--> 하나의 메모리 공간에 num1, num2, num3, num4라는 이름을 붙인 꼴이 됨.

# 참조자의 선언 가능 범위

#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 3, 5};
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];

    cout << ref1 << endl;   // 1
    cout << ref2 << endl;   // 3
    cout << ref3 << endl;   // 5
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int num=12;
    int *ptr=&num;
    int **dptr=&ptr;

    int &rep=num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout << ref <<endl;        // 12
    cout << *pref <<endl;      // 12
    cout << **dpref <<endl;    // 12
    return 0;
}