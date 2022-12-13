// 구조체란?
// 구조체(structure type)란 사용자가 C언어의 기본 타입을 가지고 새롭게 정의할 수 있는 사용자 정의 타입입니다.
// 구조체는 기본 타입만으로는 나타낼 수 없는 복잡한 데이터를 표현할 수 있습니다.
 
// 배열이 같은 타입의 변수 집합이라고 한다면, 구조체는 다양한 타입의 변수 집합을 하나의 타입으로 나타낸 것입니다.
// 이때 구조체를 구성하는 변수를 구조체의 멤버(member) 또는 멤버 변수(member variable)라고 합니다.

// typedef 키워드
// C언어의 typedef 키워드는 이미 존재하는 타입에 새로운 이름을 붙일 때 사용합니다.
// 구조체 변수를 선언하거나 사용할 때에는 매번 struct 키워드를 사용하여 구조체임을 명시해야 합니다.
// 하지만 typedef 키워드를 사용하여 구조체에 새로운 이름을 선언하면 매번 struct 키워드를 사용하지 않아도 됩니다.


// 다음 예제는 앞서 살펴본 두 가지 방법을 사용하여 각각 구조체 변수를 초기화하는 예제입니다.
#include <stdio.h>
struct book
{
	char title[30];
	char author[30];
	int price;
};

int main(void)
{
	struct book my_book = {"HTML과 CSS", "홍길동", 28000};
	struct book java_book = {.title = "Java language", .price = 30000};
	
	printf("첫 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", my_book.title, my_book.author, my_book.price);
	printf("두 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", java_book.title, java_book.author, java_book.price);
	return 0;
}

