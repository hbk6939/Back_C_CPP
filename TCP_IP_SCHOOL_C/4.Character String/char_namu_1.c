
#include <stdio.h>
void char_func1(void);
void char_func2(void);
void char_func3(void);

int main()
{
	// 1. 문자를 사용
	char_func1();
	// 2. 문자 코드를 사용
	char_func2();
	// 3. 멀티시퀀스 리터럴
	char_func3();
	
	return 0;
}

// 1. char 자료형에서 문자와 숫자 간의 매핑 관계 파악하기
void char_func1(void)
{
	char a;
	a = 'a';
	printf("char_func1 : %c\n", a);
}

// 2. 문자 코드를 사용
void char_func2(void)
{
	char a;
	a = 97;
	printf("char_func2 : %c\n", a);
}

// 3. 멀티시퀀스 리터럴
void char_func3(void)
{
	int a;
	// a = 'HELP';
	a = *(int *)"HELP";
	printf("char_func3 : %x\n", a); // 각 문자의 시퀀스인 48454c50 가 출력된다
}