#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> numlist, int n)
{
    vector<int> s;
    s.reserve(numlist.size());

    for (int x : numlist)
    {
        s.push_back(abs(x - n)); 
    }
    vector<int> idx(numlist.size());
    for (int i = 0; i < (int)idx.size(); i++) 
    {
        idx[i] = i;
    }
    sort(idx.begin(), idx.end(), [&](int i, int j)
    {
        if (s[i] != s[j]) return s[i] < s[j];         
        return numlist[i] > numlist[j];               
    });

    vector<int> answer;
    answer.reserve(numlist.size());
    for (int i : idx) 
    {
        answer.push_back(numlist[i]);
    }

    return answer;
}