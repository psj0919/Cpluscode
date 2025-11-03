#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string) 
{
    string answer = "";
    char tmp;
    for(int i=0; i<my_string.size(); i++)
    {
        if (65<= my_string[i] && my_string[i] <=90)
        {
            my_string[i] = my_string[i] + 32;
        }
    }

    for(int i=0; i<my_string.size(); i++)
    {
        for(int j=0; j<my_string.size(); j++)
        {
            if(my_string[i] < my_string[j])
            {
                tmp = my_string[i];
                my_string[i] = my_string[j];
                my_string[j] = tmp;
            }
        }
    }
    answer = my_string;

    return answer;
}

int main()
{
    string x = "Bcad";
    cout << solution(x) << endl;
}