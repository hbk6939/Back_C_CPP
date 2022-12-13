#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int grade[3] = {85, 65, 90};	// 길이가 3인 int형 배열의 선언과 동시에 초기화
	
	for (i = 0; i < 3; i++)
	{
		sum += grade[i];			// 인덱스를 이용한 배열의 접근 
	}
	
	printf("\n국영수 과목 총 점수 합계는 %d이고, 평균 점수는 %f입니다.\n\n", sum, (double)(sum/3));
	return 0;
}
