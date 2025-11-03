#include <string>
using namespace std;

static char decode(const string& s) {
    if (s == ".-")   return 'a';
    if (s == "-...") return 'b';
    if (s == "-.-.") return 'c';
    if (s == "-..")  return 'd';
    if (s == ".")    return 'e';
    if (s == "..-.") return 'f';
    if (s == "--.")  return 'g';
    if (s == "....") return 'h';
    if (s == "..")   return 'i';
    if (s == ".---") return 'j';
    if (s == "-.-")  return 'k';
    if (s == ".-..") return 'l';
    if (s == "--")   return 'm';
    if (s == "-.")   return 'n';
    if (s == "---")  return 'o';
    if (s == ".--.") return 'p';
    if (s == "--.-") return 'q';
    if (s == ".-.")  return 'r';
    if (s == "...")  return 's';
    if (s == "-")    return 't';
    if (s == "..-")  return 'u';
    if (s == "...-") return 'v';
    if (s == ".--")  return 'w';
    if (s == "-..-") return 'x';
    if (s == "-.--") return 'y';
    if (s == "--..") return 'z';
}

string solution(string letter) 
{
    string answer, le;

    for (char c : letter) {
        if (c == ' ') {
            if (!le.empty()) {
                answer += decode(le);
                le.clear();              
            }
        } else {
            le += c;
        }
    }
    
    if (!le.empty()) answer += decode(le);

    return answer;
}
