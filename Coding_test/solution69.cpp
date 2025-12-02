#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> array, int n) 
{
    int answer = 0;
    int val = array[0];
    int dist = abs(array[0] - n);

    for(int i=1; i<array.size(); i++)
    {
        int cdist = abs(array[i] - n);

        if(cdist < dist)
        {
            dist = cdist;
            val = array[i];
        }
        else if (cdist == dist)
        {
            if(array[i] < val)
            {
                val = array[i];
            }
        }
    }

    return answer=val;
}

int main()
{
    vector<int> array = {1, 2, 3};
    int n = 2;

    cout << solution(array, n)<<endl;
}