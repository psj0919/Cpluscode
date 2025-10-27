#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, int k) {
    int answer = 0;

    answer = (n * 12000) + ((k-(n/10)) * 2000);
    return answer;
}

int main()
{
    int n = 10;
    int k = 3;
    cout << solution(n, k) << endl;

    return 0;
}