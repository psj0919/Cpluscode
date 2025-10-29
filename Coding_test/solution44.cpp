#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string my_string) 
{
    vector<int> answer;
    for(int i=0; i<my_string.size(); i++)
    {
        if(my_string[i] == '0' || my_string[i] == '1' || my_string[i] == '2' || my_string[i] == '3' || my_string[i] == '4' || my_string[i] == '5' || my_string[i] == '6' || my_string[i] == '7' || my_string[i] == '8' || my_string[i] == '9')
        {
            answer.push_back(my_string[i] - '0');
        }
    }

    int tmp=0;
    if (my_string.size()!=1)
    {
        for(int i=0; i<answer.size(); i++)
        {
            for(int j=0; j<answer.size(); j++)
            {
                if(answer[i] < answer[j])
                {
                    tmp = answer[i];
                    answer[i] = answer[j];
                    answer[j] = tmp;
                }
            }
        }
    }
    return answer;
}
