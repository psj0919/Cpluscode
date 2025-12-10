#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) 
{
    vector<int> answer;
    answer.reserve(num);

    long long n = num;
    long long t = total;

    long long start = (t - (n * (n - 1) / 2)) / n;

    for(int i=0; i<num; i++)
    {
        answer.push_back((int)(start+i));
    }
    
    return answer;
}