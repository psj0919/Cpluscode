# 매크로 함수 정의.

#include <iostream>
#define SQUARE(x) ((x), (x))


ex) 매크로 함수 정의.
int main()
{
    std::cout << SQUARE(5) << std::endl;
    return 0;
}

--> 위 예제와 같이 함수의 몸체부분이 함수호출 문장을 완전히 대체했을 때 함수가 인라인화 되었다라고 표현.

# C++ 기반 인라인 함수 정의
#include <iostream>

inline int SQUARE(int x)
{
    return x * x;
}
int main()
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    return 0;
}
--> 19행: 인라인 함수의 정의방법. 키워드 inline의 선언을 통해서 함수 SQUARE는 인라인 함수가 되었다.
--> 25, 26행: SQUARE 함수를 호출하고 있다.

# 매크로 함수에는 있지만, 인라인 함수에는 없는 장점.
- 매크로 함수는 자료형에 의존적이지 않은 함수가 됨.