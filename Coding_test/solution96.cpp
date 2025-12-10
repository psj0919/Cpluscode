#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) 
{
    vector<int> answer;
    int n1 = numer1 * denom2 + numer2 * denom1;
    int n2 = denom1 * denom2;
    int g = std::gcd(n1, n2);

    n1 /= g;
    n2 /= g;

    answer.push_back(n1); 
    answer.push_back(n2); 
    return answer;
}