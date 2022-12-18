// 구조체의 크기
// 바이트 패딩(byte padding)
// 구조체를 메모리에 할당할 때 컴파일러는 프로그램의 속도 향상을 위해 바이트 패딩(byte padding)이라는 규칙을 이용합니다.
// 구조체는 다양한 크기의 타입을 멤버 변수로 가질 수 있는 타입입니다.
// 하지만 컴파일러는 메모리의 접근을 쉽게 하기 위해 크기가 가장 큰 멤버 변수를 기준으로 모든 멤버 변수의 메모리 크기를 맞추게 됩니다.
// 이것을 바이트 패딩이라고 하며, 이때 추가되는 바이트를 패딩 바이트(padding byte)라고 합니다.

#include <stdio.h>

typedef struct
{
	char a;
	int b;
	double c;
} TYPESIZE;

int main(void)
{
	puts("\n구조체 TYPESIZE의 각 멤버의 크기는 다음과 같습니다.");
	printf("%ld %ld %ld\n\n", sizeof(char), sizeof(int), sizeof(double));
	
	puts("구조체 TYPESIZE의 크기는 다음과 같습니다.");
	printf("%ld\n\n", sizeof(TYPESIZE));
	return 0;
}

// 앞선 예제에서는 크기가 가장 큰 double형 타입의 크기인 8바이트가 기준이 됩니다.
// 맨 처음 char형 멤버 변수를 위해 8바이트가 할당되며, 할당되는 1바이트를 제외한 7바이트가 남게 됩니다.
// 그다음 int형 멤버 변수는 남은 7바이트보다 작으므로, 그대로 7바이트 중 4바이트를 할당하고 3바이트가 남게 됩니다.
// 마지막 double형 멤버 변수는 8바이트인데 남은 공간은 3바이트뿐이므로 다시 8바이트를 할당받습니다.
// 따라서 이 구조체의 크기는 총 16바이트가 되며, 그중에서 패딩 바이트(padding byte)는 3바이트가 됩니다.