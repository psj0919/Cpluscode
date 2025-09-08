#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Retangle
{
private:
    Point upLeft;
    Point lowRight;

public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};
#endif

