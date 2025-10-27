#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    answer.assign(int(num_list.size()), 0);
    int count = 0;
    for(int i=int(num_list.size())-1; i>=0; i--)
    {
        answer[count] = num_list[i];
        count ++;
    }

    return answer;
}
