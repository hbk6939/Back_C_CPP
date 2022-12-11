#include <stdio.h>

int main(void)
{
	int num01 = 10;
	int num02 = 20;
	int *ptr_num01 = &num01;
	int *ptr_num02 = &num02;
		
	if (ptr_num01 != ptr_num02)		// 포인터끼리의 비교 연산 
	{
		printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
		printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);
		printf("포인터 ptr_num01과 ptr_num02는 현재 다른 주소를 가리키고 있습니다.\n\n");
		ptr_num02 = ptr_num01;		// 포인터끼리의 대입 연산 
	}
	
	printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
	printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);
	
	if (ptr_num01 == ptr_num02)		// 포인터끼리의 비교 연산 
	{
		printf("포인터 ptr_num01과 ptr_num02는 현재 같은 주소를 가리키고 있습니다.\n");
	}

	return 0;
}
