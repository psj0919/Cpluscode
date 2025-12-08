#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int chicken) 
{
    int answer = 0;
    int cup = chicken;
    while(cup >= 10)
    {
        int give = cup / 10;
        answer += give;

        cup = cup - (give * 10);
        cup += give;
    }
    return answer;
}

int main()
{
    int ck = 1081;
    cout << solution(ck) << endl;
}