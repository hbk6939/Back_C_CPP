// 구조체 배열 선언
// C 언어에서 배열의 요소가 될 수 있는 타입에는 제한이 없으므로, 구조체 역시 배열의 한 요소가 될 수 있습니다.
// 이러한 구조체 배열을 선언하는 방법은 다른 타입의 배열을 선언하는 방법과 같습니다..
// 또한, 구조체 배열에서 각 배열 요소로 접근하는 방법도 일반 배열의 접근 방법과 완전히 같습니다.

#include <stdio.h>

struct book
{
	char title[30];
	char author[30];
	int price;
};

int main(void)
{
	struct book text_book[3] = 
	{
		{"국어", "홍길동", 15000},
		{"영어", "이순신", 18000},
		{"수학1", "강감찬", 10000}
	};
	
	puts("\n각 교과서의 이름은 다음과 같습니다.");
	printf("%s, %s, %s\n\n", text_book[0].title, text_book[1].title, text_book[2].title);
	
	return 0;
}




