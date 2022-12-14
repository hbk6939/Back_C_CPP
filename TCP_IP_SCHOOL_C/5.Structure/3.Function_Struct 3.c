// 따라서 다음 예제의 calcProperty() 함수처럼 
// const 키워드를 사용하여 함수에 전달된 인수를 함수 내에서는 직접 수정할 수 없도록 하는 것이 좋습니다.

#include <stdio.h>

typedef struct
{
	int savings;
	int loan;	
} PROP;

PROP initProperty(void);
int calcProperty(const PROP*);

int main(void)
{
	PROP prop;
	int hong_prop;
	
	prop = initProperty();
	hong_prop = calcProperty(&prop);
	
	printf("\n홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다.\n\n", prop.savings, prop.loan, hong_prop);
	return 0;
}

PROP initProperty(void)
{
	PROP hong =	{10000000, 4000000};
	return hong;	// 구조체를 함수의 반환값으로 반환함.
}

int calcProperty(const PROP* money)	// const 키워드를 사용하여 구조체의 데이터를 직접 수정하는 것을 방지함.
{
	return (money->savings - money->loan);
}

// 위의 예제에서 initProperty() 함수는 반환값으로 구조체를 직접 반환합니다.
// 기본적으로 C언어의 함수는 한 번에 하나의 데이터만을 반환할 수 있습니다.
// 하지만 이렇게 구조체를 사용하면 여러 개의 데이터를 한 번에 반환할 수 있습니다.