#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) 
{
    int xSum = 0;
    int numSum = 0;

    stringstream ss(polynomial);
    string token;

    while (ss >> token)
    {
        if (token == "+") continue;

        // x항인지 확인
        if (token.find('x') != string::npos)
        {
            if (token == "x") xSum += 1;
            else
            {
                // "3x" 같은 형태에서 계수만 추출
                int coef = stoi(token.substr(0, token.size() - 1));
                xSum += coef;
            }
        }
        else
        {
            // 상수항
            numSum += stoi(token);
        }
    }

    string answer = "";

    if (xSum > 0)
    {
        if (xSum == 1) answer += "x";
        else answer += to_string(xSum) + "x";
    }

    if (numSum > 0)
    {
        if (!answer.empty()) answer += " + ";
        answer += to_string(numSum);
    }

    return answer;
}
