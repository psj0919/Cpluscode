#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) 
{
    int answer = 0;
    int tmp;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(sides[i] < sides[j])
            {
                tmp = sides[i];
                sides[i] = sides[j];
                sides[j] = tmp;
            }
        }
    }
    if (sides[2] < sides[0] + sides[1])
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }

    return answer;
}