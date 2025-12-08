#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int count =0;
    while(count < n)
    {
        answer ++;
        if(answer % 3 == 0) 
        {
            continue;
        }
        string s = to_string(answer);
        if(s.find('3') != string::npos)
        {
            continue;
        }
        count++;
        
    }
    return answer;
}