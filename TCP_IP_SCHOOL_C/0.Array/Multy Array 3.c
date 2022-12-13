// 배열의 선언과 동시에 초기화하는 방법
// 1차원 배열과 마찬가지로 2차원 배열도 선언과 동시에 초기화할 수 있습니다.
// 2차원 배열은 1차원 배열과는 달리 여러 방식으로 초기화할 수 있습니다.
 
// 1. 1차원 배열의 초기화 형태를 따르는 방식
// 2. 배열의 모든 요소를 초기화하는 방식
// 3. 배열의 일부 요소만을 초기화하는 방식

// 3. 배열의 일부 요소만을 초기화하는 방식
#include <stdio.h>

int main(void)
{
	int i, j, arr_col_len, arr_row_len;
	int arr[3][4] = {
		{10, 20},
		{30, 40, 50, 60},
		{0, 0, 70, 80}
	};
	
	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);				// 2차원 배열의 열의 길이를 계산함 
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);	// 2차원 배열의 행의 길이를 계산함 
	
	/* 2차원 배열의 출력 */
	for (i = 0; i < arr_row_len; i++)
	{
		for (j = 0; j < arr_col_len; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
