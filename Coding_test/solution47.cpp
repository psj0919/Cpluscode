#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string cipher, int code) 
{
    string answer = "";
    for(int i=1; i<cipher.size()+1; i++)
    {
        if((i * code - 1) >= cipher.size())
        {
            break;
        }
        answer += cipher[i * code - 1];
    }

    return answer;
}

int main()
{
    string x = "dfjardstddetckdaccccdegk";
    int code = 1;

    cout << solution(x, code) << endl;
}