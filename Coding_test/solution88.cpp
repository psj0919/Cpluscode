#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string A, string B) 
{
    int answer = 0;
    int count = 0;
    if(A == B)
    {
        return answer = 0;
    }
    while(count != A.size())
    {
        count++;
        for(int i=A.size(); i > -1; i--)
        {
            A[i] = A[i-1];
        }
        if(A == B)
        {
            return answer = 1;
        }
    }

    return answer = -1;
}