#include <iostream>

// 문제 1 참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하여라.
//-> 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
//-> 인자로 전달된 int형 변수의 부호를 바꾸는 함수

void adder(int &a)
{
    a++;
}
void changer(int &a)
{
    a = -a;
}
int main()
{
    int num1 =10;
    adder(num1);
    changer(num1);
    std::cout << num1 << std::endl; // 11, -10
    return 0;
}

// 문제 2 RefSwap.cpp의 SwapByRef2 함수를 다음의 형태로 호출하면 컴파일 에러가 발생한다.
// SwapByRef2(23, 45);
// 컴파일 에러가 발생하는 이유가 무엇인가

// -> SwapByRef2 함수는 참조자를 인자로 받기 때문에, 인자로 전달된 값이 변수의 주소를 참조해야 한다.
//    따라서, SwapByRef2(23, 45);와 같이 상수값을 인자로 전달하면 컴파일 에러가 발생한다.

// 문제 3 ptr1과 ptr2가 가리키는 대상이 서로 바뀌도록 SwapPointer 함수를 정의.

void SwapPointer(int *&ptr1, int *&ptr2)
{
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main()
{
    int num1= 5;
    int *ptr = &num1;
    int num2=10;
    int *ptr2 = &num2;
    SwapPointer(ptr, ptr2);
    std::cout << "Before Swap: ptr1 = " << *ptr << ", ptr2 = " << *ptr2 << std::endl;
    std::cout << "After Swap: ptr1 = " << *ptr2 << ", ptr2 = " << *ptr << std::endl;
}