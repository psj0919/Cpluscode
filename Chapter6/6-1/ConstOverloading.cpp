#include
using namespace std;

class sosimple
{

private:
    int num;
public:
    sosimple(int n) : num(n) {}
    sosimple & AddNum(int n)
    {
        num +=n;
        return *this;
    }
    void simplefunc() 
    {
        cout << "Called non-const function." << endl;
    }
    void simplefunc() const
    {
        cout << "Called const function." << endl;
    }
    // 함수의 const 선언 유무는 함수 오버로딩의 조건이 된다.
};
void yourfunc(sosimple & ref) // const 객체가 아닌 경우
{
    ref.simplefunc();
}


int main()
{
    sosimple obj(7);
    yourfunc(obj); // const 객체가 아니므로 non-const 멤버 함수가 호출된다.
    const sosimple cobj(9);
    // yourfunc(cobj); // 에러! const 객체이므로 non-const 멤버 함수를 호출할 수 없다.
    cobj.simplefunc(); // const 객체이므로 const 멤버 함수가 호출된다.
    return 0;
}