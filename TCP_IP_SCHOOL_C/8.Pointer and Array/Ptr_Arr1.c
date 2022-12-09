// 배열의 이름은 그 값을 변경할 수 없는 상수라는 점을 제외하면 포인터와 같습니다.
// 따라서 배열의 이름은 포인터 상수(constant pointer)입니다.
// 포인터 상수(constant pointer)란 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없는 포인터를 의미하며,
// 상수 포인터(pointer to constant)란 상수를 가르키는 포인터를 의미합니다.

#include <stdio.h>

int main(void)
{
	int arr[3] = {10, 20, 30};	// 배열 선언 
	int* ptr_arr = arr;			// 포인터에 배열의 이름을 대입함 
	
	printf("배열의 이름을 이용하여 배열 요소에 접근 : \n\t arr[0] = %d, arr[1] = %d, arr[2] = %d\n", arr[0], arr[1], arr[2]);
	printf("    포인터를 이용하여 배열 요소에 접근 : \n\t ptr_arr[0] = %d, ptr_arr[1] = %d, ptr_arr[2] = %d\n", ptr_arr[0], ptr_arr[1], ptr_arr[2]);
		
	printf("배열의 이름을 이용한 배열의 크기 계산 : \n\t sizeof(arr)) = %zd\n", sizeof(arr));
	printf("    포인터를 이용한 배열의 크기 계산 : \n\t sizeof(ptr_arr)) = %zd\n", sizeof(ptr_arr));
	return 0;
}
