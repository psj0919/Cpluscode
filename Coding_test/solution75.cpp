#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) 
{
    int answer = 0;
    int num = 1;
    int index = 0;
    while(1)
    {
        if(num != k)
        {
            index += 2;
            num++;
            if (index >= numbers.size())
            {
                index = index - numbers.size();
            }
        }
        else if (num == k)
        {
            break;
        }
    }
    
    return answer = numbers[index];
}