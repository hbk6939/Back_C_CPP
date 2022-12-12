#include <stdio.h>
#include <uchar.h>

int char_func1(void);
int char_func2(void);
int char_func3(void);
int char_func4(void);

int main()
{
	// 1. char 자료형에서 문자와 숫자 간의 매핑 관계 파악하기
	char_func1();
	// 2. 
	char_func2();
	// 3. UTF-8 인코딩 방식을 통해서 char 자료형으로 입출력하는 예제이다.
	char_func3();
	// 4. char 자료형을 UTF-8 방식으로 인코딩할 경우 한글 1자의 바이트를 구하는 예제이다.
	char_func4();
	
	return 0;
}

// 1. char 자료형에서 문자와 숫자 간의 매핑 관계 파악하기
int char_func1(void)
{
	printf(u8"char_func1 : char 입력해주세요.\n");
	char a;
	scanf("%c", &a);
	while(getchar() != '\n');
	printf("char_func1 : %d\n\n", a);
	
	return 0;
}

// 2.
int char_func2(void)
{
	char a;
	a = 97;
	printf("char_func2 : %c\n\n", a + 1);
	
	return 0;
}

// 3. UTF-8 인코딩 방식을 통해서 char 자료형으로 입출력하는 예제이다.
int char_func3(void)
{
	char a[20];

	printf(u8"char_func3 : String 입력해주세요.\n");
	scanf(u8"%[^\n]", a);
	while(getchar() != '\n');
	printf(u8"char_func3 : %s(이)라고 입력하셨습니다.\n\n", a);
	
	return 0;
}

// 4. char 자료형을 UTF-8 방식으로 인코딩할 경우 한글 1자의 바이트를 구하는 예제이다.
int char_func4(void)
{
	char a[]=u8"가나다라";

	printf(u8"%s\n", a);
	printf(u8"UTF-8로 인코딩한 \"%s\"의 총 %ld 바이트\n", a,sizeof(a));
	printf("즉 3바이트 * 한글 수 + 1\n\n");

	return 0;
}