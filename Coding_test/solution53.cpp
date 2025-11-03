#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int k) 
{
    int answer = 0;
    string x = to_string(num);
    answer = x.find(k+'0');

    if (answer == string::npos)
    {
        return -1;
    }
    return answer+1;
}

int main()
{
    int num = 29183;
    int k = 1;
    cout << solution(num, k) << endl;
}