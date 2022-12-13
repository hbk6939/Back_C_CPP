#include <stdio.h>

int main(void)
{
	char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	
	printf("\n포인터   ptr_char가 현재 가리키고 있는 주소값은 %p입니다.\n", ptr_char);
	printf("포인터    ptr_int가 현재 가리키고 있는 주소값은 %p입니다.\n", ptr_int);
	printf("포인터 ptr_double이 현재 가리키고 있는 주소값은 %p입니다.\n\n", ptr_double);
	
	printf("포인터   ptr_char가 1 증가 후에 가리키고 있는 주소값은 %p입니다.\n", ++ptr_char);
	printf("포인터    ptr_int가 1 증가 후에 가리키고 있는 주소값은 %p입니다.\n", ++ptr_int);
	printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %p입니다.\n\n", ++ptr_double);
	return 0;
}
