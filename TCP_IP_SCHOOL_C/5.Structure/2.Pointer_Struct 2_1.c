#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct{
	char name[20];
	char title[20];
	int page;
}book;

int main(){
	book *book1 = (book*)malloc(sizeof(book)*3); // 구조체 3개 동적할당
	// memset(book1, 0, sizeof(book)*3);
	
	int i;

	for(i=0; i<3; i++){
		scanf("%s %s %d", book1[i].name, book1[i].title, &book1[i].page);
	}

	for(i=0; i<3; i++){
		printf("%s %s %d \n", book1[i].name, book1[i].title, book1[i].page);
	}

	free(book1); // 동적할당 해제
	
	return 0;
}