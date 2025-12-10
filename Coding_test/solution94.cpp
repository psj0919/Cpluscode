#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) 
{
    int answer = 0;
    int d1 = common[1] - common[0];
    int d2 = common[2] - common[1];

    if(d1 == d2)
    {
        return common.back() + d1;
    }
    else
    {
        int r = common[1] / common[0];
        return common.back() * r;
    }
    
}