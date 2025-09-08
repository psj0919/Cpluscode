#ifndef __point_h__
#define __point_h__

class Point
{
private:
    int x;
    int y;
public:
    bool InitMembers(int xpos, int ypos);
    int Getx() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);

};
#endif
