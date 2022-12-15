// 중첩된 구조체
// C언어에서는 구조체를 정의할 때 멤버 변수로 또 다른 구조체를 포함할 수 있습니다.

#include <stdio.h>

struct name
{
	char first[30];
	char last[30];
};

struct friends
{
	struct name friend_name;
	char address[30];
	char job[30];
};

int main(void)
{
	struct friends hong = 
	{
		{ "길동", "홍" },
		"서울시 강남구 역삼동",
		"학생"
	};
	
	printf("%s\n\n", hong.address);
	printf("%s%s에게,\n", hong.friend_name.last, hong.friend_name.first);
	printf("그동안 잘 지냈니? 아직 %s이지?\n", hong.job); 
	puts("공부 잘 하고, 다음에 꼭 한번 보자.\n잘 지내^^");
	return 0;
}

