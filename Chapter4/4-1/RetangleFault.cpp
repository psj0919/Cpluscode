#include <iostream>
using namespace std;

class Point
{
public:
int x;
int y;
};

class Rectangle
{
public:
    point Upleft;
    point Lowright;
public:
    void ShowRecInfo()
    {
        cout << "좌측 상단: (" << Upleft.x << "," << Upleft.y << ")" << endl;
        cout << "우측 하단: (" << Lowright.x << "," << Lowright.y << ")" << endl;
    }
}
int main()
{
    Point pos1 = {-2, 4};
    Point pos2 = {5, 9};
    Rectangle rec = {pos2, pos1};
    rec.ShowRecInfo();
    return 0;
}