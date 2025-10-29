#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    int tmp = 0;
    for(int i=0; i<array.size(); i++)
    {
        for (int j =0; j<array.size(); j++)
        {
            if (array[i] < array[j])
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    answer = array[int(array.size() / 2)];
    return answer;
}