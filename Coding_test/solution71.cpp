#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string my_str, int n) 
{
    vector<string> answer;
    int num = 0;
    string x = "";
    for(int i=0; i<my_str.size(); i++)
    {
        x += my_str[i];
        if (x.size() == n)
        {
            answer.push_back(x);
            x.clear();
        }
    }
    if(!x.empty())
    {
        answer.push_back(x);
    }

    return answer;
}

