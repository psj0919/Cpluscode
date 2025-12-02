#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) 
{
    vector<int> answer(emergency.size(), 1);
    vector<int> sorted_em = emergency;
    for(int i=0; i<emergency.size(); i++)
    {
        for(int j=0; j<emergency.size(); j++)
        {
            if(emergency[i] < emergency[j])
            {
                answer[i] ++;
            }
        }
    }
        
    return answer;
}