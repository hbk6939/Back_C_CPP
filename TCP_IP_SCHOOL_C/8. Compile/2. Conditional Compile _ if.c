#include <stdio.h>
#define COND 2

int main(void)
{
	#if COND == 1
		puts("매크로 상수 COND가 선언되어 있으며, 그 값은 1입니다.");
	#elif COND == 2
		puts("매크로 상수 COND가 선언되어 있으며, 그 값은 2입니다.");
	#elif COND == 3
		puts("매크로 상수 COND가 선언되어 있으며, 그 값은 3입니다.");
	#endif
	return 0;
}
