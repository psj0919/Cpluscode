#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) 
{
    string answer = "";
    char x = my_string[num1];
    char y = my_string[num2];

    answer = my_string;
    answer[num1] = y;
    answer[num2] = x;

    return answer;
}