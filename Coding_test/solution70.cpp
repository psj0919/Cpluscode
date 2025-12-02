#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int fact = 1;   // 현재까지의 팩토리얼 값 (i!)
    int i = 1;      // 현재 i
    

    while (true) {
        
        if (fact * (i + 1) > n) {
        
            break;
        }
        i++;
        fact *= i;  
    }

    return i;
}