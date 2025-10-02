#include <iostream>
using namespace std;


class car
{
private:
    int gas;
public:
    car (int n) : gas(n)
    {
        return gas;
    }
    int Getgas()
    {
        return gas;
    }
};

class Hybridcar : public car
{
private:
    int ele;
public:
    Hybridcar(int n) : ele(n)
    {
        return ele;
    }
    Hybridcar(int n1, int n2) : car(n1), ele(n2)
    {
        return ele;
    }
    int Getele()
    {
        return ele;
    }
};

class Hybridwatercar : public Hybridcar
{
private:
    int water;
public:
    Hybridwatercar(int n) : water(n)
    {
        return water;
    }
    Hybridwatercar(int n1, int n2) : Hybridcar(n1), water(n2)
    {
        return water;
    }
    Hybridwatercar(int n1, int n2, int n3) : car(n1), Hybridcar(n2), water(n3)
    {
        return water;
    }    
    void ShowCur()
    {
        cout << Getgas() << endl;
        cout << Getele() << endl;
        cout << water << endl;
    }
};

int main()
{
    car c1()
}