#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int hp) 
{
    int answer = 0;
    int dm[] = {5, 3, 1};
    while (1)
    {
        if (hp <= dm[0])
        {
            if (hp == 5)
            {
                answer += 1;
                hp = 0;
                break;
            }
            else if (hp == 4)
            {
                answer += 2;
                hp = 0;
                break;
            }
            else if (hp == 3)
            {
                answer += 1;
                hp = 0;
                break;
            }
            else if (hp == 2)
            {
                answer += 2;
                hp = 0;
                break;
            }
            else if (hp == 1)
            {
                answer += 1;
                hp = 0;
                break;
            }
            else
            {
                break;
            }
        }
        else
        {
            answer += 1;
            hp = hp - 5;
        }
    }


    return answer;
}
int main()
{
    int h = 23;
    solution(h);
}