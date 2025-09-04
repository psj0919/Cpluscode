#include <iostream>
using namespace std;


class Calculater
{
private:
		float add_result;
		float div_result;
		float min_result;
		float mul_result;
		
public:
		void Init();
		void ShowOpCount();
		void Add(float a, float b);
		void Div(float a, float b);
		void Min(float a, float b);
		void Mul(float a, float b);
};
void Calculater::Init()
{
		add_result = 0;
		div_result = 0;
		min_result = 0;
		mul_result = 0;
}
void Calculater::ShowOpCount()
{
		cout << add_result << min_result << mul_result << div_result << endl; 

}
void Calculater::Add(float a, float b)
{
		add_result = a + b; 
}
void Calculater::Div(float a, float b)
{
		add_result = a / b;
}
void Calculater::Min(float a, float b)
{
		add_result = a - b; 
}
void Calculater::Mul(float a, float b)
{
		add_result = a * b;
}

int main()
{
        Calculater cal;
        cal.Init();
        cal.Add(3.2,2.4);
        cal.Min(3,4);
        cal.Mul(3,4);
        cal.Div(3,4);
        cal.ShowOpCount();
}