// 다음 예제는 함수의 인수로 구조체의 주소를 직접 전달하는 예제입니다.
#include <stdio.h>

typedef struct
{
	int savings;
	int loan;	
} PROP;

int calcProperty(PROP*);

int main(void)
{
	int hong_prop;
	PROP hong =	{10000000, 4000000};
	
	hong_prop = calcProperty(&hong);	// 구조체의 주소를 함수의 인수로 전달함. 
	
	printf("\n홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다.\n\n", hong.savings, hong.loan, hong_prop);
	return 0;
}

int calcProperty(PROP* money)
{
	money->savings = 100;	// 호출된 함수에서 원본 구조체의 데이터를 변경
	return (money->savings - money->loan);
}

// 위와 같이 구조체 포인터를 인수로 전달하는 방식은 구조체의 복사본이 아닌 주소 하나만을 전달하므로 처리가 빠릅니다.
// 하지만 호출된 함수에서 원본 구조체에 직접 접근하므로 원본 데이터의 보호 측면에서는 매우 위험합니다.