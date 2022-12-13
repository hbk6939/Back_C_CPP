// 배열의 이름은 그 값을 변경할 수 없는 상수라는 점을 제외하면 포인터와 같습니다.
// 따라서 배열의 이름은 포인터 상수(constant pointer)입니다.
// 포인터 상수(constant pointer)란 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없는 포인터를 의미하며,
// 상수 포인터(pointer to constant)란 상수를 가르키는 포인터를 의미합니다.

#include <stdio.h>

int main(void)
{
	int arr[3] = {10, 20, 30};	// 배열 선언 
	
	printf("\n          배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr[0], arr[1], arr[2]);
	printf("배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : %d %d %d\n\n", *(arr+0), *(arr+1), *(arr+2));
	return 0;
}
