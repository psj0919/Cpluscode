#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    for (int i=1; i<=1000; i++)
    {
        if (n == i * i)
        {
            return 1;
        }
    }
    return answer = 2;
    
}