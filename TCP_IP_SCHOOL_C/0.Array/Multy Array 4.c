// 배열의 길이 자동 설정
// 1차원 배열과 마찬가지로 2차원 배열도 배열의 길이를 명시하지 않고, 자동으로 배열의 길이를 설정할 수 있습니다.
// 단, 열의 길이는 생략할 수 있지만, 행의 길이는 반드시 명시해야 합니다.

#include <stdio.h>

int main(void)
{
	int i, j, arr_col_len, arr_row_len;
	int arr[][4] = {
		{10, 20},
		{30, 40, 50, 60},
		{0, 0, 70, 80}
	};
	
	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);				// 2차원 배열의 열의 길이를 계산함 
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);	// 2차원 배열의 행의 길이를 계산함 
	
	/* 2차원 배열의 출력 */
	for (i=0; i<arr_row_len; i++)
	{
		for (j=0; j<arr_col_len; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
