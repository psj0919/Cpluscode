# 이름공간
- 이름공간이란 이름을 붙여놓은 공간으로 풀어서 사용할 수 있다.
- 특정 영역에 이름을 붙여주기 위한 문법적 요소.
# 이름공간 예시.

#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}
namespace ProgComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<"ProgCom이 정의한 함수"<<std::endl;
    }
}
int main()
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}
--> 8~14행: BestComlmpl이라는 이름의 공간을 마련.
--> 15~21행: ProgComlmpl이라는 이름의 공간을 마련.
--> 24행: BestComlmpl 내에 정의된 함수 SimpleFunc를 호출.
--> 25행: ProgComlmpl 내에 정의된 함수 SimpleFunc를 호출.

# 이름공간의 중첩

namespace Parent
{
    int num=2;

    namespace Subone
    {
        int num=3;

        namespace Subtwo
        {
            int num=4;
        }
    }
}
--> std::cout << Parent::num << std::endl;
--> std::cout << Parent::Subone::num << std::endl;
--> std::cout << Parent::Subtwo::num << std::endl;

# using을 이용한 이름공간의 명시

#include <iostream>
namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout << "So simple function" <<std::endl;
        std::cout << "In namespace Hybrid" <<std::endl;
    }
}

int main()
{
    using Hybrid::HybFunc;
    HybFunc();
    return 0;
}
--> using 선언을 통해서 이름공간의 지정 없이 HybFunc 함수를 호출.

using std::cin;
using std::cout;
using std::endl;
--> 이렇게 선언하면 std::cout 이렇게 사용하지 않고 cout만 사용할 수 있다.

# 이름공간의 별칭 지정

namespace AAA
{
    namespace BBB
    {
        namespace CCC
        {
            int num1;
            int num2;
        }
    }
}
--> AAA::BBB::CCC::num1=20;
--> AAA::BBB::CCC::num2=30; 이런 식으로 접근해야 하지만 이것은 매우 불편함.

namespace ABC = AAA::BBB::CCC;
--> 별칭을 지정할 수 있음
--> ABC::num1 = 20, ABC::num2 = 30

# 범위지정 연산자(Scope Resoution Operator)

int val = 100 //전역변수

int SimpFunc()
{
    int val = 20;  // 지역변수
    val += 3;      // 지역변수 val의 값 3 증가.
    ::val += 7     // 다음과 같이 선언하면 전역변수 val의 값을 7증가 할 수 있음.
}
