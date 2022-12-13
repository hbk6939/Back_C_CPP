// 구조체를 가리키는 포인터
// 구조체 변수를 가리키는 구조체 포인터는 다음과 같이 선언합니다.

// 문법
// struct 구조체이름* 구조체포인터이름;
// struct book* ptr_my_book;

// 구조체 포인터를 이용하여 구조체의 멤버에 접근하는 방법

// 1. 참조 연산자(*)를 이용하는 방법
// (*구조체포인터).멤버변수이름
// (*ptr_my_book).author

// 2. 화살표 연산자(->)를 이용하는 방법
// 구조체포인터 -> 멤버변수이름
// ptr_my_book -> author  

#include <stdio.h>
#include <string.h>

typedef struct 
{
	char title[30];
	char author[30];
	int price;
}book;

int main(void)
{
	book my_book = {"C언어 완전 해부", "홍길동", 35000};
	book* ptr_my_book;	// 구조체 포인트 선언 
	
	ptr_my_book = &my_book; 
	
	strcpy((*ptr_my_book).title, "C언어 마스터");	// 참조 연산자(*)를 이용하는 방법
	strcpy(ptr_my_book->author, "이순신");			// 화살표 연산자(->)를 이용하는 방법
	my_book.price = 32000;							// 구조체 변수을 이용한 직접 수정 
	
	printf("\n책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n\n", my_book.title, my_book.author, my_book.price);
	return 0;
}
