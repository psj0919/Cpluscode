#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(string numbers) 
{
    long long answer = 0;
    string x = "";
    string y = "";
    for(int i=0; i<numbers.size(); i++)
    {
        x += numbers[i];
        if (x == "one")
        {
            x.clear();
            y += '1';
        }
        else if (x == "two")
        {
            x.clear();
            y += '2';            
        }
        else if (x == "three")
        {
            x.clear();
            y += '3';            
        }
        else if (x == "four")
        {
            x.clear();
            y += '4';            
        }
        else if (x == "five")
        {
            x.clear();
            y += '5';            
        }
        else if (x == "six")
        {
            x.clear();
            y += '6';            
        }
        else if (x == "seven")
        {
            x.clear();
            y += '7';            
        }
        else if (x == "eight")
        {
            x.clear();
            y += '8';            
        }
        else if (x == "nine")
        {
            x.clear();
            y += '9';            
        }
        else if (x == "zero")
        {
            x.clear();
            y += '0';            
        }
                                                               
    }
    return answer = stol(y);
}
int main()
{
    string x = "ninenine";
    cout << solution(x) << endl;
}