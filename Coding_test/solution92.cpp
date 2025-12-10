#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) 
{
    sort(array.begin(), array.end());

    int bestVal = array[0];
    int bestCnt = 1;
    int curCnt = 1;
    bool tie = false;

    if(array.size() == 1)
    {
        return array[0];
    }

    for (int i = 1; i < (int)array.size(); i++)
    {
        if (array[i] == array[i-1])
        {
            curCnt++;
        }
        else
        {
            if (curCnt > bestCnt)
            {
                bestCnt = curCnt;
                bestVal = array[i-1];
                tie = false;
            }
            else if (curCnt == bestCnt)
            {
                tie = true;
            }
            curCnt = 1;
        }
    }

    if (curCnt > bestCnt)
    {
        bestCnt = curCnt;
        bestVal = array.back();
        tie = false;
    }
    else if (curCnt == bestCnt)
    {
        tie = true;
    }

    return tie ? -1 : bestVal;
}
