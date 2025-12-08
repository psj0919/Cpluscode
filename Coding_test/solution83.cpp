#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) 
{
    string answer = "";
    int false_size = 0;
    for(int i=0; i<db.size(); i++)
    {
        if(db[i][0] == id_pw[0])
        {
            if(db[i][1] == id_pw[1])
            {
                return answer = "login";
            }
            else
            {
                return answer = "wrong pw";
            }    
        }
        else
        {
            false_size++;
        }    
    }
    if(false_size == db.size())
    {
        return answer = "fail";
    }
}

int main()
{
    vector<string> id_pw = {"meosseugi", "1234"};
    vector<vector<string>> db = {{"rardss", "123"}, {"yyoom", "1234"}, {"meosseugi", "1234"}};
    solution(id_pw, db);
}