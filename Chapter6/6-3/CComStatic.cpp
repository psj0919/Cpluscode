// CComStatic.cpp
#include <iostream>
using namespace std;

void Counter()
{
    static int cnt;
    cnt ++;
    cout << "Counter : " << cnt << endl;
}

int main()
{
    for(int i=0; i<10; i++)
        Counter();
    return 0;
}
// 1 -> 2 -> 3 -> ... -> 10
// static 지역 변수는 함수가 종료되어도 소멸되지 않고,
// 다시 함수가 호출되었을 때 이전에 저장된 값을 유지한다.
// 따라서 위 예제에서 cnt는 함수가 호출될 때마다 1씩 증가한다
