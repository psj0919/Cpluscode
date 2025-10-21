#include <iostream>
using namespace std;

class Point
{

private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y)
    {}
    void ShowPosition() const
    {
        cout << xpos, ypos << endl;
    }
    Point operator+(const Point & ref)
    {
        Point pos(xpos+ref.xpos, ypos+ref.ypos);
        return pos;
    }
};

int main()
{
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1.operator(pos2);

}

// 해당 예제는 pos1과 pos2의 덧셈 결과를 기반으로 객체를 생성하기 위한 문장