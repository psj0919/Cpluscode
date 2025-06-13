# [문제 1] 키워드 const의 의미
const: constant의 약자로 "변함없는" 이란 뜻으로 변수 앞에 붙으면 값을 변경하지 못하도록 하며, 해당 변수를 상수로 취급하게 됨.
1-1 const int num=10; --> 변수 num을 상수화.
1-2 const int * ptr1 =&val1; --> 포인터 ptr1을 이용해서 val1의 값을 변경할 수 없음.
1-3 int * const ptr2 = &val2; --> 포인터 ptr2가 상수화 됨.
1-4 const int * const ptr3 =&val3; --> 포인터 ptr3가 상수화 되었으며, ptr3를 이용해서 val3의 값을 변경할 수 없음.

# [문제 2] 실행중인 프로그램의 메모리 공간
실행중인 프로그램은 운영체제로부터 메모리 공간을 할당 받는데, 이는 크게 데이터, 스택, 힙, 영역으로 나뉜다. 각각의 영역에는 어떠한 형태의 변수가 할당되는지 설명.
2-1 데이터: 전역변수가 저장되는 영역.
2-2 스택: 지역변수 및 매개변수가 저장되는 영역.
2-3 힙: malloc 함수호출에 의해 프로그램이 실행되는 과정에서 동적으로 할당이 이뤄지는 영역.
2-4 malloc & free malloc 함수호출에 의해 할당된 메모리 공간은 free 함수호출을 통해서 소멸하지 않으면 해제되지 않는다.

# [문제 3] Call-by-value & Call-by-reference

void SwapByValue(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    // Call-by-value
    // 기본적으로 C언어에서 지원하는 방식, 함수에서 값을 복사해서 전달하는 방식으로, 인자로 전달되는 변수를 함수의 매개변수에 복사함. 원본 값을 바꿀 필요가 없는 경우 사용.
}

void SwapByRef(int * ptr1, int * ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    // Call-by-reference
    // C언어에서의 방식은 주소값 자체를 복사해서 넘겨주는 것. 또한, 이렇게 주소값을 복사해서 넘겨주는 것을 call by address 방식이라고 함.
    // C언어에서 포인터를 이용해 주소값을 넘겨주는 방식.
}
