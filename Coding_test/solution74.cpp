#include <string>
#include <vector>
#include <sstream>   

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    stringstream ss(my_string);
    string token;
    char op = '+';   

    while (ss >> token)
    {
        if (token == "+" || token == "-")
        {

            op = token[0];
        }
        else
        {

            int num = stoi(token);
            if (op == '+')
                answer += num;
            else if (op == '-')
                answer -= num;
        }
    }

    return answer;
}
