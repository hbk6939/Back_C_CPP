// 배열의 특징
// C언어에서 배열은 다음과 같은 특징을 가집니다.
// 1. 배열의 길이를 선언할 때에는 반드시 상수를 사용해야 합니다.
// 2. 배열 요소의 인덱스는 언제나 0부터 시작합니다.
// 3. C 컴파일러는 배열의 길이를 전혀 신경 쓰지 않습니다.

#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int grade[3] = {85, 65, 90};	// grade[0], grade[1], grade[2]만 선언 및 초기화 
	grade[3] = 100;					// grade[3]를 선언하지 않고 초기화 진행 
	
	for (i = 0; i < 4; i++)			// grade[3]도 수식에 포함 
	{
		sum += grade[i];
		printf("i = %d 일 떄 누적 sum = %d\n", i, sum);
	}
	
	printf("\n국영수 과목 총 점수 합계는 %d이고, 평균 점수는 %lf입니다.\n\n", sum, (double)sum/3);
	return 0;
}

// 위의 예제에서는 크기가 3인 int형 배열 grade를 선언하고 있습니다.
// 즉, 배열 grade의 배열 요소는 grade[0], grade[1], grade[2]만이 존재합니다.
// 하지만 존재하지도 않는 grade[3]이라는 배열 요소의 초기화를 진행하고, 반복문을 통해 수식에서도 이용합니다.

// 이때 C 컴파일러는 오류는커녕 수식에서까지 이 배열 요소를 이용하여 결과를 출력합니다.
// 하지만 이 결과는 개발자가 전혀 의도하지 않은 결과물이며, 이러한 프로그램은 종종 예상치 못한 결과를 내주기도 합니다.