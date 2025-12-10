#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) 
{
    vector<string> answer;
    for(const auto&q : quiz)
    {
        stringstream ss(q);
        int a, b, c;
        char op, eq;

        ss >> a >> op >> b >> eq >> c;
        int result = (op == '+') ? (a+b) : (a-b);
        answer.push_back(result == c ? "O" : "X");
    }

    return answer;
}