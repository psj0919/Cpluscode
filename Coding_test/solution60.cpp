#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    for(int i=0; i<my_string.size(); i++)
    {
        cout << my_string.find(my_string[i]) << endl;
    }
    return answer;
}


int main()
{
    string x = "people";
    solution(x);
}