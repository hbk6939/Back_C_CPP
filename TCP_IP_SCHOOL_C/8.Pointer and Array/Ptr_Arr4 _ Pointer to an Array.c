// '배열 포인터'란 배열을 가리킬 수 있는 포인터를 의미합니다.

// 앞서 배열의 이름은 그 값을 변경할 수 없는 상수라는 점을 제외하면 포인터와 같다고 했습니다.
// 이렇게 배열 이름이 있는데도 따로 배열 포인터를 정의하여 사용하는 이유는 
// 2차원 이상의 배열을 가리킬 때 포인터를 통해 배열과 같은 인덱싱을 할 수 있도록 하기 위함입니다.
// 즉, 포인터를 배열처럼 사용하기 위해서 배열 포인터를 정의하여 사용합니다.
// 따라서 배열 포인터는 1차원 배열에서는 아무런 의미가 없으며, 2차원 이상의 배열에서만 의미를 가집니다.

#include <stdio.h>

int main(void)
{
	int arr[2][3] = 			// 배열의 선언
	{
		{10, 20, 30},
		{40, 50, 60}
	};
	printf("*arr[0] = %d\n", *arr[0]);
	printf("*arr[1] = %d\n\n", *arr[1]);
	
	
	int (*pArr)[3] = arr;		// 배열 포인터(Pointer to array)의 선언
	int arr_row_len = sizeof(arr)/sizeof(arr[0]);
	int arr_col_len = sizeof(arr[0])/sizeof(arr[0][0]);
	
	for (int i = 0; i < arr_row_len; i++)
	{
		for (int j = 0; j < arr_col_len; j++)
		{
			printf("arr[%d][%d] : %d\n", i, j, arr[i][j]); // 배열 이름으로 참조
			printf("pArr[%d][%d] : %d\n\n", i, j, pArr[i][j]); // 배열 포인터로 참조
		}
	}
	
	return 0;
}
