#include <iostream>
#include <cstring>
using namespace std;

class Employee
{

private:
    char name[100];
public:
    Employee(char * name)
    {
        strcpy(this->name, name);
    }
    void showyourname() const
    {
        cout << name <<endl;
    }
};

class PermanentWork : public Employee
{
private:
    int salary;
public:
    PermanentWork(char * name, int money) : Employee(name), salary(money)
    {}
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        showyourname();
        cout << salary << endl;
    }
};

class EmployeeHandler
{
private:
    Employee * empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0)
    {}
    void AddEmployee(Employee * emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {

    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        cout << sum << endl;
    }
    ~EmployeeHandler()
    {
        for(int i=0; i<empNum; i++)
        {
            delete empList[i];
        }
    }
}
