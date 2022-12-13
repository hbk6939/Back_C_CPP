#include <stdio.h>

int main(void)
{
	int num01 = 10;
	int num02 = 20;
	int *ptr_num01 = &num01;
	int *ptr_num02 = &num02;
		
	if (ptr_num01 != ptr_num02)		// 포인터끼리의 비교 연산 
	{
		printf("\n포인터 ptr_num01(%p)이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", ptr_num01, *ptr_num01);
		printf("포인터 ptr_num02(%p)가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", ptr_num02, *ptr_num02);
		printf("포인터 ptr_num01(%p)과 ptr_num02(%p)는 현재 다른 주소를 가리키고 있습니다.\n", ptr_num01, ptr_num02);
		ptr_num02 = ptr_num01;		// 포인터끼리의 대입 연산
		printf("ptr_num02 = ptr_num01 포인터끼리 대입연산\n\n");
	}
	
	printf("포인터 ptr_num01(%p)이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", ptr_num01, *ptr_num01);
	printf("포인터 ptr_num02(%p)가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", ptr_num02, *ptr_num02);
	
	if (ptr_num01 == ptr_num02)		// 포인터끼리의 비교 연산 
	{
		printf("포인터 ptr_num01과 ptr_num02는 현재 같은 주소를 가리키고 있습니다.\n\n");
	}

	return 0;
}
