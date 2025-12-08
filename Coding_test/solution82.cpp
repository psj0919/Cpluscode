#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
// auto: 컴파일러가 변수의 타입을 자동으로 결정
int solution(vector<string> spell, vector<string> dic) 
{
    int answer = 0;
    string target ="";
    for(auto &ch : spell)
    {
        target += ch;
    }
    sort(target.begin(), target.end());
    cout << target << endl;
    for(auto &word : dic)
    {
        if(word.size() != target.size())
        {
            continue;
        }
        string sortword = word;
        sort(sortword.begin(), sortword.end());

        if (sortword == target)
            return answer = 1;
    }
    return answer = 2;
}

int main()
{
    vector<string> spell = {"p", "o", "s"};
    vector<string> dic = {"sod", "eocd", "qixm", "adio", "soo"};
    solution(spell, dic);
}