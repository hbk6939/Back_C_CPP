#include <stdio.h>
#define PI 3.14 	// 이 부분의 주석처리를 없애고 난 후에 다시 실행시켜 보세요! 

int main(void)
{
	#ifndef PI
		puts("매크로 상수 PI가 선언되어 있지 않습니다."); 
	#else
		printf("매크로 상수 PI가 선언되어 있으며 그 값은 %.2f입니다.\n", PI);
	#endif
	return 0;
}

// #ifndef는 'if not defined'라는 문장을 줄여서 만든 것