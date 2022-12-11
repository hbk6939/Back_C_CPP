#include <stdio.h>

void local(int);

int main(void)
{
	int var = 10;
	printf("변수 var의 초기값은 %d입니다.\n", var);

	local(var);
	printf("local() 함수 호출 후 변수 var의 값은 %d입니다.\n", var);
	return 0;
}

void local(int num)
{
	num += 10;
}
