#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) 
{
    int answer = 0;
    int n = balls;
    int r = share;

    if(r > n-r)
    {
        r = n - r;
    }
    long long result = 1;

    for(int i=1; i <= r; i++)
    {
        result = result * (n - r + i) / i;
    }

    return answer = int(result);
}