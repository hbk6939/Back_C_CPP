// calloc() 함수
// calloc() 함수는 malloc() 함수와 마찬가지로 힙 영역에 메모리를 동적으로 할당해주는 함수입니다.
// 이 함수가 malloc() 함수와 다른 점은 할당하고자 하는 메모리의 크기를 두 개의 인수로 나누어 전달받는 점입니다.

// 또한, calloc() 함수는 메모리를 할당받은 후에 해당 메모리의 모든 비트값을 전부 0으로 초기화해 줍니다.
// calloc() 함수도 malloc() 함수와 마찬가지로 free() 함수를 통해 할당받은 메모리를 해제해 주어야 합니다.

// void *calloc(size_t nmemb, size_t size);
// calloc() 함수의 첫 번째 인수는 메모리 블록의 개수를 나타내며, 두 번째 인수는 각 블록의 바이트 수를 나타냅니다.
// 따라서 calloc() 함수는 힙 영역에 size 크기의 메모리 블록을 nmemb개 할당받을 수 있도록 요청합니다.
// 1. ptr_arr = (int*) malloc(arr_len * sizeof(int));
// 2. ptr_arr = (int*) calloc(arr_len, sizeof(int));


// realloc() 함수
// realloc() 함수는 이미 할당된 메모리의 크기를 바꾸어 재할당할 때 사용하는 함수입니다.

// void *realloc(void *ptr, size_t size);
// realloc() 함수의 첫 번째 인수는 크기를 바꾸고자 하는 메모리 공간을 가리키는 포인터를 전달받습니다.
// 두 번째 인수로는 해당 메모리 공간에 재할당할 크기를 전달합니다.
// 따라서 첫 번째 인수로 NULL이 전달되면, malloc() 함수와 정확히 같은 동작을 하게 됩니다.


// 런 타임에 크기가 결정된 배열의 크기를 realloc() 함수를 사용해 다시 한 번 늘려주는 예제.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, total_len;
	int arr_len = 3, add_len = 2;
	int* ptr_arr;
	
	ptr_arr = (int*) malloc(arr_len * sizeof(int));	// 메모리의 동적 할당 
	
	if (ptr_arr == NULL)	// 메모리의 동적 할당이 실패할 경우
	{
		printf("메모리의 동적 할당에 실패했습니다.\n");
		exit(1);
	}
	
	printf("동적으로 할당받은 메모리의 초기값은 다음과 같습니다.\n");
	for (i = 0; i < arr_len; i++)
	{
		printf("%d ", ptr_arr[i]); // 메모리 초기값
		printf("%p \n", &ptr_arr[i]); // 동적 할당 메모리 주소
	}
	
	total_len = arr_len + add_len;
	ptr_arr = (int*) realloc(ptr_arr, (total_len * sizeof(int)));	// 메모리의 추가 할당 
	
	if (ptr_arr == NULL)	// 메모리의 추가 할당에 실패할 경우
	{
		printf("메모리의 추가 할당에 실패했습니다.\n");
		exit(1);
	}
			
	printf("\n추가로 할당받은 메모리의 초기값은 다음과 같습니다.\n");
	for (i = 0; i < total_len; i++)
	{
		printf("%d ", ptr_arr[i]); // 메모리 초기값
		printf("%p \n", &ptr_arr[i]); // 동적 할당 메모리 주소
	}
	
	free(ptr_arr);			// 동적으로 할당된 메모리의 반환 
	
	return 0;
}

