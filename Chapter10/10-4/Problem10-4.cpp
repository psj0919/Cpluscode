#include <iostream>
using namespace std;

class Point{

private:
    int xpos, ypos;
public:
    Point(int x=0, int y = 0) : xpos(x), ypos(y)
    {}
    void ShowPosition() const
    {
        cout << xpos, ypos << endl;
    }
    friend Point operator << (ostream&, const Point&);    
    friend Point operator >> (istream&, Point& pos);    
};

Point operator << (ostream&, const Point&)
{
    os << pos.xpos, pos.ypos << endl;
    return os;
}
Point operator >> (istream&, Point& pos)
{
    is >>pos.xpos>>pos.ypos;
    return is;
}

int main()
{
    Point pos1;
    cout << "x, y";
    cin >> pos1;
    cout << pos1;

    Point pos2;
    cout << "x, y";
    cin >> pos2;
    cout << pos2;
    return 0;
}