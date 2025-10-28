#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) 
{
    vector<int> answer;
    int x = 0;
    if (money % 5500 == 0)
    {
        answer.push_back(int(money/5500));
        answer.push_back(0);
    }
    else
    {
        x = int(money / 5500);
        answer.push_back(x);
        answer.push_back(money - (5500 * x));
    }
    return answer;
}