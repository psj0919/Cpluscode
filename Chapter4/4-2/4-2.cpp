#include <iostream>
using namespace std;


class Point
{

private:
    int xpos;
    int ypos;

public:
    void ShowPointInfo() const
    {
        std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
    }
};

class Ring
{

private:
    int radius1;
    int radius2;
public:
    void Init(x1, y1, r1, x2, y2, r2)
    {
        Point center;
        center.Init(x1, y1);
        radius1 = r1;
        Point center2;
        center2.Init(x2, y2);
        radius1 = r2;
    }
    void ShowRingInfo() const
    {
        cout << radius1 << endl;
        cout << center.ShowPointInfo() << endl;
        cout << radius2 << endl;
        cout << center2.ShowPointInfo() << endl;
    }
}


int main(void)
{
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}