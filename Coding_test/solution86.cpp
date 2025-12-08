#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<vector<int>> score) 
{

    vector<int> answer;
    vector<int> avg;
    int count = 1;
    for(int i=0; i<score.size(); i++)
    {
        avg.push_back((score[i][0]+score[i][1]));
        answer.push_back(1);
    }

    for(int i=0; i<score.size(); i++)
    {
        for(int j=0; j<score.size(); j++)
        {
            if(avg[j] > avg[i])
            {
                answer[i] ++;
            }
        }
    }

    return answer;
}
int main()
{
    vector<vector<int>> score = {{80, 70}, {90, 50}, {40, 70}, {50, 80}};
    cout << solution(score) << endl;
}