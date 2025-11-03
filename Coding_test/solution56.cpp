#include <string>
#include <vector>

using namespace std;

string solution(int age) 
{
    string answer = "";
    string x = to_string(age);
    for (int i=0; i<x.size(); i++)
    {
        if (x[i] == '0')
        {
            answer += 'a';
        }
        else if (x[i] == '1')
        {
            answer += 'b';
        }
        else if (x[i] == '2')
        {
            answer += 'c';
        }
        else if (x[i] == '3')
        {
            answer += 'd';
        }
        else if (x[i] == '4')
        {
            answer += 'e';
        }
        else if (x[i] == '5')
        {
            answer += 'f';
        }
        else if (x[i] == '6')
        {
            answer += 'g';
        }
        else if (x[i] == '7')
        {
            answer += 'h';
        }
        else if (x[i] == '8')
        {
            answer += 'i';
        }
        else if (x[i] == '9')
        {
            answer += 'j';
        }                

    }
    return answer;
}