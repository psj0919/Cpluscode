#include <string>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

double solution(vector<int> numbers) 
{
    double answer = 0;
    for (int i =0; i<numbers.size(); i++)
    {
        answer += numbers[i];
    }
    answer = float(answer) / float(numbers.size());
    return answer;
}