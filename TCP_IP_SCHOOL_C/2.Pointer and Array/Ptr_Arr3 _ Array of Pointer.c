// Pointer Arrays: Pointers to Pointers
// 포인터 배열이란 배열 요소로 포인터 변수를 가지는 배열을 의미합니다.
// 즉, 포인터 변수를 저장할 수 있는 배열을 의미합니다.

#include <stdio.h>

int main(void)
{
	int i, arr_len;
	int num01 = 10, num02 = 20, num03 = 30;
	int* arr[3] = {&num01, &num02, &num03};	// int형 포인터 배열 선언 
	
	arr_len = sizeof(arr)/sizeof(arr[0]);
	for (i = 0; i < arr_len; i++)
	{
		printf("*arr[%d] == %d\n", i, *arr[i]);
	}
	
	for (i = 0; i < arr_len; i++)
	{
		printf("arr[%d] == %p\n", i, arr[i]);
	}
	
	return 0;
}

