#include <stdio.h>

int main(void)
{
	int grade[] = {85, 65, 90};							// 배열의 길이를 명시하지 않음 
	int arr_len = sizeof(grade) / sizeof(grade[0]);		// 배열의 길이를 구하는 공식 
	
	printf("배열 grade의 길이는 %d입니다.\n", arr_len);
	return 0;
}
