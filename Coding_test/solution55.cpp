#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    if (n % 6 == 0)
    {
        answer = n / 6;
    }
    else
    {
        int i = 1;
        while(true)
        {
            if ((i * 6) % n == 0)
            {
                answer = i;
                break;
            }
            else
            {
                i ++;
            }
        }
    }
    return answer;
}