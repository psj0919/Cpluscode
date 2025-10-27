#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num1, int num2) 
{

    int answer = 0;
    answer = int((float(num1) / float(num2)) * 1000);



    return answer;
}

int main()
{
    int num1 = 7;
    int num2 = 3;

    cout << solution(num1, num2) << endl;

    return 0;
}