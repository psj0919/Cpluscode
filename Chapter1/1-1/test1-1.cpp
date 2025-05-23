#include <iostream>

//문제 1
//사용자로부터 총 4개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성
# if 0
int main()
{
    int num1, num2, num3, num4, num5;
    std::cout << "1번째 정수 입력:";
    std::cin >> num1;
    
    std::cout << "2번째 정수 입력:";
    std::cin >> num2;

    std::cout << "3번째 정수 입력:";
    std::cin >> num3;

    std::cout << "4번째 정수 입력:";
    std::cin >> num4;

    std::cout << "5번째 정수 입력:";
    std::cin >> num5;

    int result = num1+num2+num3+num4+num5;
    std::cout <<"합계:"<<num1+num2+num3+num4+num5;
}
# endif

//문제 2
// 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성.
# if 0
int main()
{
    char num1[100], num2[100];
    std::cout << "이름";
    std::cin >> num1;
    
    std::cout << "전화번호";
    std::cin >> num2;

    std::cout << "이름:"<<num1 <<"전화번호:" <<num2;
}
# endif

//문제 3
// 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성
# if 0
int main()
{
    int num;
    std::cin >> num;

    for(int i = 1; i<10;i++)
    {
        std::cout <<num<< "X" << i << "=" <<num * i<<std::endl;
    }

}
# endif

//문제 4
// 판매원들의 급여 계산 프로그램을 작성.
// 매달 50만원 급여 & 물품 판매 가격의 12%에 해당하는 돈을 지급.
# if 1
int main()
{
    int num;
    

    while (1)
    {
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> num;
        if (num==-1) break;

        std::cout << "이번 달 급여: " << 50 + num * 0.12 <<std::endl;
    }

}
# endif