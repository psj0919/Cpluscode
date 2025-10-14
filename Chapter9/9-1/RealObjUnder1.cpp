#include <iostream>
using namespace std;

class Data
{
private:
    int data;
public:
    Data(int num) : data(num)
    {}
    void ShowData()
    {
        cout << "DATA" << endl;
    }
    void Add(int num)
    {
        data += num;
    }
};

int main()
{
    Data obj(75);
    obj.Add(17);
    obj.ShowDAta();
    return 0;
}

//실행결과
// Data : 32
// -> 