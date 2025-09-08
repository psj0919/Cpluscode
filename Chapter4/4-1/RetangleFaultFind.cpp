#include <iostream>
#include "Point.h"
#include "Retangle.h"
using namespace std;

int main()
{
    Point pos1;
    if(!pos1.InitMembers(-2, 4))
    {
        cout << "Error!" << endl;
        return 0;
    }
    if(!pos1.InitMembers(4, -2))
    {
        cout << "Error!" << endl;
        return 0;
    }

    Point pos2;
    if(!pos2.InitMembers(5, -3))
    {
        cout << "Error!" << endl;
        return 0; 
    }
    if(!pos2.InitMembers(-3, 5))
    {
        cout << "Error!" << endl;
        return 0; 
    }

    rec.ShowRecInfo();
    return 0;


}