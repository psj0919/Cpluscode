#include <iostream>
using namespace std;

int simobjcnt = 0;
int cmxobjcnt = 0;


class sosimple
{
public:
    sosimple()
    {
        simobjcnt++;
        cout << "sosimple default constructor called." << endl;
    }
};

class sosimplex
{
public:
    sosimplex()
    {
        cmxobjcnt++;
        cout << "sosimplex default constructor called." << endl;
    }
    ShowObjectCnt(socomplex &copy)
    {
        cmxobjcnt++;
        cout << "sosimplex object count : " << cmxobjcnt << endl;
    }
};

int main()
{
    sosimple sim1;
    sosimple sim2;
    cout << "sosimple object count : " << simobjcnt << endl;

    sosimplex cmx1;
    sosimplex cmx2;
    cmx1.ShowObjectCnt(cmx2);
    return 0;
}
// 전역 변수 simobjcnt와 cmxobjcnt는 각각 sosimple과 sosimplex 클래스의 객체가 생성될 때마다 1씩 증가한다.
// 따라서 main() 함수에서 sosimple 클래스의 객체 sim1과 sim2가 생성될 때 simobjcnt는 2가 되고,
// sosimplex 클래스의 객체 cmx1과 cmx2가 생성될 때 cmxobjcnt는 2가 된다.
// 그리고 cmx1.ShowObjectCnt(cmx2) 함수가 호출될 때 cmxobjcnt는 3이 된다.
// 전역 변수는 프로그램이 종료될 때까지 소멸되지 않고 유지되므로,
// 프로그램 전체에서 객체의 개수를 추적하는 데 유용하다.