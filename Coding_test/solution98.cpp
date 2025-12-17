#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) 
{
    int answer = 0;
    long dx1 = dots[1][0] - dots[0][0];
    long dy1 = dots[1][1] - dots[0][1];
    long dx2 = dots[3][0] - dots[2][0];
    long dy2 = dots[3][1] - dots[2][1];
    if (dx1 * dy2 == dy1 * dx2) return 1;

    // case 2: (0-2) vs (1-3)
    dx1 = dots[2][0] - dots[0][0];
    dy1 = dots[2][1] - dots[0][1];
    dx2 = dots[3][0] - dots[1][0];
    dy2 = dots[3][1] - dots[1][1];
    if (dx1 * dy2 == dy1 * dx2) return 1;

    // case 3: (0-3) vs (1-2)
    dx1 = dots[3][0] - dots[0][0];
    dy1 = dots[3][1] - dots[0][1];
    dx2 = dots[2][0] - dots[1][0];
    dy2 = dots[2][1] - dots[1][1];
    if (dx1 * dy2 == dy1 * dx2) return 1;

    return 0;
}