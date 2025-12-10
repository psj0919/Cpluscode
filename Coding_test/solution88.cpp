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
    while(count < A.size())
    {
        count++;
        char last = A.back();
        for(int i = (int)A.size()-1; i>0; i--)
        {
            A[i] = A[i-1];
        }
        A[0] = last;
        if(A==B)
        {
            return count;
        }
    }
    
    return -1;
    
}