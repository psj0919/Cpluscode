#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string before, string after) 
{
    int answer = 0;
    string ans = "";
    char tmp;
    if (before.size() != after.size())
    {
        return answer=0;
    }
    for(int i=0; i<before.size(); i++)
    {
        for(int j=0; j<before.size(); j++)
        {
            if((before[i] - 'a') < (before[j] - 'a'))
            {
                tmp = before[i];
                before[i] = before[j];
                before[j] = tmp;
            }
        }
    }
    for(int i=0; i<after.size(); i++)
    {
        for(int j=0; j<after.size(); j++)
        {
            if((after[i] - 'a') < (after[j] - 'a'))
            {
                tmp = after[i];
                after[i] = after[j];
                after[j] = tmp;
            }
        }
    }
    if (before == after)
    {
        return answer = 1;
    }
    else
    {
        return answer = 0;
    }

    return answer;
}

