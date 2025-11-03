#include <string>
using namespace std;

string solution(string s) {
    int cnt[26] = {0};
    for (char c : s) cnt[c - 'a']++;   

    string answer;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] == 1) answer += char('a' + i);  
    }
    return answer;
}
