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

    Point & operator - ()
    {
        point pos(-xpos, -ypos);
        return pos;
    }
    friend Point& operator~ (Point & ref)

};

Point & operator~ (Point & ref)
{
    Point pos(ref.ypos, ref.xpos);
    return pos;
}

int main()
{
    Point pos(1, 2);
    ++pos;
    pos.ShowPosition();
    --pos;
    pos.ShowPosition();

    ++(++pos);
    pos.ShowPosition();
    --(--pos);
    pos.ShowPosition();
    return 0;
}