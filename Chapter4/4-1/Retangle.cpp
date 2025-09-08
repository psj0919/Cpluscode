#include <iostream>
#include "Retangle.h"
using namespace std;

bool Retangle::InitMembers(const Point &ul, const Point &lr)
{
    if (ul.GetX() > lr.GetX() || ul.GetY() < lr.GetY())
    {
        cout << "Error!" << endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}
void Rectangle::ShowRecInfo() const
{
    cout << "좌측 상단: " << upLeft.GetX() << endl;
    cout << "우측 하단: " << lowRight.ShowPointInfo() << endl;
}
