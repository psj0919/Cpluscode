#include <string>
#include <vector>


using namespace std;

vector<int> solution(vector<string> strlist) 
{
    vector<int> answer;
    int count = 0;
    for(int i=0; i<strlist.size(); i++)
    {
        for(int j=0; j<strlist[i].size(); j++)
        {
            count ++;
        }
        answer.push_back(count);
        count =0;
    }

    return answer;
}
