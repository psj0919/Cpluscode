#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;

    if (n % slice == 0)
    {
        answer = (n / slice);
    }
    else 
    {
        answer = (n / slice) + 1;
    }
    return answer;
}

int main()
{
    int slice = 1;
    int n = 10;

    cout << solution(slice, n) << endl;

}