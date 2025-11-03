#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) 
{
    vector<vector<int>> answer;
    vector<int> ans;
    int count = 0;
    
    for(int i=0; i<num_list.size(); i++)
    {
        ans.push_back(num_list[i]);

        if ((i+1)% n == 0)
        {
            answer.push_back(ans);
            ans.clear();
        }        
    }
    return answer;
}
