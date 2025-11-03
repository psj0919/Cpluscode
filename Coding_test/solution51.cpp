#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) 
{
    vector<int> answer;
    int max_idx = 0;
    int max_num = 0;
    for(int i=0; i<array.size(); i++)
    {
        for(int j = 0; j<array.size(); j++)
        {
            if (array[i] < array[j])
            {
                max_num = array[j];
                max_idx = j;
            }
        }
    }
    answer.push_back(max_num);
    answer.push_back(max_idx);
    
    return answer;
}