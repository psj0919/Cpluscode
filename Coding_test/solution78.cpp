#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) 
{
    int answer = 0;
    int a = sides[0];
    int b = sides[1];
    int small = min(a, b);    

    return answer = 2 * small - 1;
}