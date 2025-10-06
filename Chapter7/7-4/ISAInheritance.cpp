#include <iostream>
#include <cstring>
using namespace std;

class Computer
{

private:
    char owner[30];
public:
    Computer(char * name)
    {
        strcpy(owner, name);
    }
    void calculate()
    {
        cout << "!" << endl;
    }
};

class NotebookComp : public Computer
{

private:
    int battery;
public:
    NotebookComp(char * name, int initChag) : Computer(name), battery(initChag)
    {}
    void Charging() {battery +=5;}
    void Usebattery() {Battery -= 1;}
    void MovingCal()
    {
        if(GetbatteryInfo() < 1)
        {
            cout << "!"<<endl;
            return;
        }
        cout <<"±"<<endl;
        calculate();
        Usebattery();
    }
    int GetbatteryInfo() {return battery;}
};

class TableNotebook : public NotebookComp
{

private:
    char regstPenModel[50];
public:
    TableNotebook(char * name, int initChag, char * pen)
    {
        strcpy(regstPenModel, pen);
    }
    void Write(char * penInfo)
    {
        if(GetbatteryInfo() <1)
        {
            cout <<"!"<<endl;
            return;
        }
        if(strcmp(regstPenModel, penInfo) != 0)
        {
            cout <<"!"<<endl;
            return;
        }
        cout << "1"<<endl;
        Usebattery();
    }
};