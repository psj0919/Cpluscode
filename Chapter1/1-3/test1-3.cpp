// 문제 1
// 예제 Default3.cpp에 정의돈 함수 BoxVolume을 매개변수의 디폴트 값 지정 형태가 아닌 함수 오버로딩의 형태로 재 구현.

#include <iostream>
# if 0
int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);


int main()
{
    std::cout << "BoxVolume(3, 3, 3): " << BoxVolume(3, 3, 3) << std::endl;
    std::cout << "BoxVolume(5, 5): " << BoxVolume(5, 5) << std::endl;
    std::cout << "BoxVolume(7): " << BoxVolume(7) << std::endl;
    return 0;

}


int BoxVolume(int length, int width, int height)
{
    return length * width * height;
}
int BoxVolume(int length, int width)
{
    return length * width;
}
int BoxVolume(int length)
{
    return length;
}
# endif

// 문제 2
//다음과 같은 형태의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명.

int SimpleFunc(int a=10)
{
    return a+1;
}
int SimpleFunc(void)
{
    return a;
}
// 해당 함수 오버로딩을 사용하여 만약, main 함수에서 SimpleFunc를 아무런 인자 없이 호출하게 되면 두 함수 모두 해당이 되어 함수 호출 중 충돌이 발생함.