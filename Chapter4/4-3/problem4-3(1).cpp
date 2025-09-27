#include <iostream>
using namespace std;


class Point
{

private:
    int xpos;
    int ypos;

public:
    Point(int x, int y): xpos(x), ypos(y) {}

    void ShowPointInfo() const
    {
        std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
    }
};
class Circle
{
private:
    int rad;
    Point center;
public:
    Circle(int x, int y, int r): center(x, y)
    {
        rad = r;
    }
    void ShowCircleInfo() const
    {
        cout << "radius: " << rad << endl;
        center.ShowPointInfo();
    }
};

class Ring
{

private:
    Circle incircle;
    Circle outcircle;
public:
    Ring(int x1, int y1, int r1, int x2, int y2, int r2) : incircle(x1, y1, r1), outcircle(x2, y2, r2)
    { }
    void ShowRingInfo() const
    {
        incircle.ShowCircleInfo();
        outcircle.ShowCircleInfo();
    }
}

int main(void)
{
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}