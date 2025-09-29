#include <iostream>
using namespace std;

class Point

class PointOP
{
private:
    int opcnt;
public:
    PointOP() : opcnt(0)
    {}
    void PointAdd(const Point&, const Point&);
    void PointSub(const Point&, const Point&);
    ~PointOP() 
    {
        cout << "Total operation count : " << opcnt << endl;
    }
};

class Point
{

private:
    int x, y;
public:
    point(const int &x, const int &y) : x(x), y(y)
    {}
    friend Point PointOP::PointAdd(const Point&, const Point&);
    friend Point PointOP::PointSub(const Point&, const Point&);
    friend void ShowPointPos(const Point &);
};

point PointOP::PointAdd(const Point & p1, const Point & p2)
{
    opcnt++;
    return point(p1.x + p2.x, p1.y + p2.y);
}

point PointOP::PointSub(const Point & p1, const Point & p2)
{
    opcnt++;
    return point(p1.x - p2.x, p1.y - p2.y);
}
int main()
{
    Point p1(2, 4);
    Point p2(5, 1);
    PointOP op;
    Point p3 = op.PointAdd(p1, p2);
    ShowPointPos(p3);
    Point p4 = op.PointSub(p1, p2);
    ShowPointPos(p4);
    return 0;
}

void ShowPointPos(const Point & pos)
{
    cout << "Point position : " << pos.x << ", " << pos.y << endl;
}
