// 메모리의 동적 할당(dynamic allocation)
// 데이터 영역과 스택 영역에 할당되는 메모리의 크기는 컴파일 타임(compile time)에 미리 결정됩니다.
// 하지만 힙 영역의 크기는 프로그램이 실행되는 도중인 런 타임(run time)에 사용자가 직접 결정하게 됩니다.
// 이렇게 런 타임에 메모리를 할당받는 것을 메모리의 동적 할당(dynamic allocation)이라고 합니다.

// malloc() 함수
// malloc() 함수는 프로그램이 실행 중일 때 사용자가 직접 힙 영역에 메모리를 할당할 수 있게 해줍니다.
// void *malloc(size_t size); // size_t 타입은 부호없는 정수

// free() 함수 
// free() 함수는 힙 영역에 할당받은 메모리 공간을 다시 운영체제로 반환해 주는 함수입니다.
// void free(void *ptr);

// free() 함수는 인수로 해제하고자 하는 메모리 공간을 가리키는 포인터를 전달받습니다.
// 인수의 타입이 void형 포인터로 선언되어 있으므로, 어떠한 타입의 포인터라도 인수로 전달될 수 있습니다.


// 다음 예제는 크기가 고정된 배열이 아닌 런 타임에 크기가 결정되는 배열을 생성하는 예제입니다.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int arr_len = 3;
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
		printf("%d ", ptr_arr[i]);
		printf("%p \n", &ptr_arr[i]);
	}
	
	free(ptr_arr);			// 동적으로 할당된 메모리의 반환 
	
	return 0;
}








