// 문자열 처리 함수
// C언어에서 문자열이란 마지막에 널 문자를 가지는 문자형 배열로 표현되며, 기본 타입에는 포함되지 않습니다.
// 따라서 C 컴파일러가 기본 타입을 위해 제공하는 다양한 연산자를 자유롭게 사용할 수 없습니다.
 
// 이 때문에 C언어는 문자열을 처리하기 위한 다양한 함수를 별도로 제공하고 있습니다.
// C언어에서 제공하는 대표적인 문자열 처리 함수는 다음과 같습니다.
 
// 1. strlen() 함수
// 2. strcat(), strncat() 함수
// 3. strcpy(), strncpy() 함수
// 4. strcmp(), strncmp() 함수
// 5. atoi(), atol(), atoll(), atof() 함수
// 6. toupper(), tolower() 함수


// strlen() 함수
// strlen() 함수는 인수로 전달된 문자열의 길이를 반환하는 함수입니다.
// 이때 문자열 여부를 구분하는 마지막 문자인 널 문자는 문자열의 길이에서 제외됩니다.
// size_t strlen(const char *s); 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "C언어";
	
	printf("이 문자열의 길이는 %ld입니다.\n", strlen(str)); 
	return 0;
}
