#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
    int n;
    string x = "*";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if (i != 1)
        {
            x.append("*");    
        }

        cout << x << endl;
    }
    
    return 0;
}