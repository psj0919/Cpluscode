#include <iostream>
using namespace std;

class Sosimple
{
private:
    int num1;
    int num2;
public:
    Sosimple(int n1, int n2) : num1(n1), num2(n2)
    {}
    Sosimple(Sosimple & copy) : num1(copy.num1), num2(copy.num2)
    {}
    void ShowSimpleData()
    {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main()
{
    SOsimple sim1(15, 30);
    cout << "생성 및 초기화 직후의 데이터" << endl;
    Sosimple sim2 = sim1;
    cout << "sim1의 데이터" << endl;
    sim2.ShowSimpleData();
    return 0;
}
