#include <iostream>
// 문제 1 다음의 상수선언을 해보자.
// const int num=12
// 포인터 변수를 선언해서 위; 변수를 가리키게 해보자 그리고 이 포인터 변수를 촘조하는 참조자를 하나 선언하자.
// 마지막으로 이렇게 선언된 포인터 변수와 참조자를 이용해서 num에 저장된 값을 출력하는 예제를 완성해보자.

int main() {
    const int num = 12; // 상수 선언
    const int* ptr = &num; // 포인터 변수 선언, num을 가리킴
    const int *(&ref) = ptr; // 포인터 변수를 참조하는 참조자 선언

    std::cout << "num: " << num << std::endl; // num 출력
    std::cout << "Value through pointer: " << *ptr << std::endl; // 포인터를 통해 값 출력
    std::cout << "Value through reference: " << *ref << std::endl; // 참조자를 통해 값 출력

    return 0;
}
