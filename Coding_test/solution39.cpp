#include <string>
#include <vector>

using namespace std;

int solution(int price) 
{
    int answer = price;
    int discount[] = {0, 5, 10, 20};
    int cutoffs[] = {0, 100000, 300000, 500000};

    for (int i = 3; i > 0; --i)
    {
        if (price >= cutoffs[i])
        {
            answer = price * (100 - discount[i]) / 100;
            break;
        }
    }

    return answer;
}

