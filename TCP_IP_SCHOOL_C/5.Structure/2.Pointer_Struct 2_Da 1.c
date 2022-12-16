#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct{
	char name[20];
	char title[20];
	int page;
}book;

int main()
{
	book (*Dinamic_book)[3] = (book*)malloc(sizeof(book)*3);

	// Dinamic_book[0] = (book){"국어", "홍길동", 15000};
	
	
	for(int i=0; i<3; i++){
		printf("%s %s %d \n", Dinamic_book[i]->name, Dinamic_book[i]->title, Dinamic_book[i]->page);
	}
	
	free(Dinamic_book); // 동적할당 해제
	
	return 0;
}