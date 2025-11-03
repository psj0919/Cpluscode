#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) 
{
    int answer = 0;

    for(int x = i; x <= j; ++x)
    {
        string s = to_string(x);
        for(char c : s)
        {
            if(c == char('0' + k))
            {
                answer++;
            }
        }
    }
    return answer;
}