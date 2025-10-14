#include <iostream>
using namespace std;

class Retangle
{
private:
    int x, y;
public:
    Retangle(int x, int y) : x(x), y(y)
    {

    }

    void ShowAreaInfo()
    {
        cout << x * y << endl;
    }
};

class Square : public Retangle
{
public:
    Square(int s) : Retangle(s, s)
    {}
}


int main()
{
    Retangle rec (4, 3);
    rec.ShowAreaInfo();

    Square sqr(7);
    sqr.ShowAreaInfo();
    return 0;

}