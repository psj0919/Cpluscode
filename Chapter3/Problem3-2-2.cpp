#include <iostream>
using namespace std;

class Printer {
private:
    char str[100];
public:
    void SetString(char * message) {
        strcpy(str, message);
    }
    void ShowString() {
        cout << str << endl;
    }
};

int main() {

    Printer pnt;
    pnt.SetString("Hello World");
    pnt.ShowString();

    pnt.SetString("C++ Programming");
    pnt.ShowString();
    return 0;
}