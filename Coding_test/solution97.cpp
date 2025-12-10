#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) 
{
    
    vector<int> cover(201, 0);

    for (auto &l : lines)
    {
        int s = min(l[0], l[1]);
        int e = max(l[0], l[1]);


        for (int x = s; x < e; x++)
        {
            cover[x + 100]++;  
        }
    }

    int answer = 0;
    for (int i = 0; i < 201; i++)
    {
        if (cover[i] >= 2) answer++;
    }

    return answer;
}
