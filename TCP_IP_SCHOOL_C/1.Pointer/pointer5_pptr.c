#include <stdio.h>

int main(void)
{
	int num = 10;				// 변수 선언 
	int* ptr_num = &num;		// 포인터 선언 
	int** pptr_num = &ptr_num;	// 포인터의 포인터 선언 
	
	printf("변수 num(주소:%p)가 저장하고 있는 값은 %d입니다.\n", &num, num);
	printf("싱글 포인터  ptr_num(주소:%p)가 가리키는 주소에 저장된 값은 %d입니다.\n", &ptr_num, *ptr_num);
	printf("더블 포인터 pptr_num(주소:%p)가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %d입니다.\n", &pptr_num, **pptr_num);
	return 0;
}
