// EmployeeManager1.cpp의 PermanentWorker 클래스 정의

#include <iostream>
using namespace std;


class PermanentWorker
{
private:
    char name[100];
    int salary;
public:
    PermanentWorker(char * name, int money) : salary(money)
    {
        strcpy(this->name, name);
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        cout << "name" << name << endl;
        cout << "salary" << salary << endl;
    }
};

// EmployeeManager1.cpp의 EmployeeHandler 클래스 정의

class EmployeeHandler
{
private:
    PermanentWorker * empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0)
    {}
    void AddEmployee(PermanentWorkers * emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        int sum;
        for (int i=0; i<empNum; i++)
        {
           empList[i] -> ShowAllSalaryInfo();
        }
    }
    void ShowTotalSalaryInfo() const
    {
        int sum = 0;
        for (int i=0; i<empNum; i++)
        {
            sum += empList[i] -> GetPay();
            cout << "Salary sum:" << sum << endl;
        }
    }
    ~EmployeeHandler()
    {
        for (int i=0; i<empNum; i++)
        {
            delete empList[i];
        }
    }
}

int main()
{
    EmployeeHandler handler;

    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));

    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalaryInfo();
    return 0;

}