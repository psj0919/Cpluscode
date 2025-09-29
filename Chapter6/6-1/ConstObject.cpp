#include <iostream>
using namespace std;

class sosimple
{
private:
    int num;
public:
    sosimple(int n) : num(n) {}
    sosimple & AddNum(int n)
    {
        num += n;
        return *this;
    }
    void ShowData() const
    {
        cout << "num : " << num << endl;
    }
};
int main()
{
    const sosimple obj(7);
    // obj.AddNum(3); // 에러! const 객체이므로 멤버 함수 AddNum()을 호출할 수 없다.
    obj.ShowData(); // const 멤버 함수이므로 호출 가능
    return 0;
}