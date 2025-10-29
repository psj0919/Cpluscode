#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    for(int i=0; i<my_string.size(); i++)
    {
        if (('a' <=my_string[i])&& (my_string[i] <= 'z'))
        {
            answer += my_string[i] - 32;
        }
        else
        {
            answer += my_string[i] + 32;
        }        
    }

    return answer;
}

int main()
{
    string x = "cccCCC";
    cout << solution(x) << endl;
}