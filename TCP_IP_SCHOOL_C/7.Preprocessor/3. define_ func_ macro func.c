#include <stdio.h>
#define SQR(X) X*X
#define PRT(X) printf("계산 결과는 %d입니다.\n", X)

// 함수와 매크로 함수
// 매크로 함수는 일반 함수와는 달리 단순 치환만을 해주므로, 일반 함수와 완전히 똑같은 방식으로 동작하지는 않습니다.

int main(void)
{
	int result;
	int x = 5;
	
	result = SQR(10);
	PRT(result); // 10*10 = 100
	
	result = SQR(x);
	PRT(result); // 5*5 = 25
	
	result = SQR(x+3);
	PRT(result); // x+3*x+3 = 5+3*5+3 = 5+15+3 = 23
	
	return 0;
}
// 선행처리기는 매크로 정의에서 모든 X를 X+3으로 대체합니다.
// 따라서 SQR(x+3)은 다음과 같이 대체되어 계산됩니다.
 
// x+3*x+3 = 5+3*5+3 = 5+15+3 = 23
 
// 예상한 결괏값은 8*8=64였지만 전혀 다른 결괏값이 반환되는 것입니다.
