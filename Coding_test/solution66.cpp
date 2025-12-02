#include <string>
#include <vector>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    int cur = 0;
    int num = 0;
    for(int i=0; i<my_string.size(); i++)
    {
        char c = my_string[i];
        if (c >= '0' && c <= '9')
        {
            cur = cur * 10 + (c - '0');
        }
        else
        {
            answer += cur;
            cur = 0;
        }
    }


    return answer += cur;
}