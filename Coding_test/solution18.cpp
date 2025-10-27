#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    int tmp=0;
    for(int i=0; i<numbers.size(); i++)
    {
        for (int j =0; j<numbers.size(); j++)
        {
            if (numbers[i] < numbers[j])
            {
                tmp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tmp;
            }
        }
    }
    answer = numbers[numbers.size()-1] * numbers[numbers.size()-2];
    return answer;
}

int main()
{
    vector<int> x = {1, 2, 5, 5, 5};
    cout << solution(x) << endl;
}