#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i = my_string.size()-1; i >= 0; i--)
    {
        answer += my_string[i];
    }

    return answer;
}


int main()
{
    std::string x = "jaron";

    cout << solution(x) << endl;
}

