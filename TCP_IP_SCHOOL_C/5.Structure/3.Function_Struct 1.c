// 함수와 구조체
// C언어에서는 함수를 호출할 때 전달되는 인수나, 함수가 종료될 때 반환되는 반환값으로 구조체를 사용할 수 있습니다.
// 그 방식은 기본 타입과 완전히 같으며, 구조체를 가리키는 포인터나 구조체의 한 멤버 변수만을 사용할 수도 있습니다.
 
// 다음 예제는 구조체의 멤버 변수를 함수의 인수로 전달하는 예제입니다.
#include <stdio.h>

typedef struct
{
	int savings;
	int loan;	
} PROP;

int calcProperty(int, int);

int main(void)
{
	int hong_prop;
	PROP hong =	{10000000, 4000000};
	
	hong_prop = calcProperty(hong.savings, hong.loan);	// 구조체의 멤버 변수를 함수의 인수로 전달함 
	
	printf("\n홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다.\n\n", hong.savings, hong.loan, hong_prop);
	return 0;
}

int calcProperty(int s, int l)
{
	return (s - l);
}
// 위와 같이 구조체를 인수로 전달하는 방식은 함수가 원본 구조체의 복사본을 가지고 작업하므로 안전하다는 장점을 가집니다.
