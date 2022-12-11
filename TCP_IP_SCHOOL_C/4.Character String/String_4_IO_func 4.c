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



// atoi(), atol(), atoll(), atof() 함수
// 이 함수들은 인수로 전달된 문자열을 해당 타입의 숫자로 변환시켜주는 함수입니다.
// int atoi(const char *nptr);            // int형 정수로 변환함.
// long int atol(const char *nptr);       // long형 정수로 변환함.
// long long int atoll(const char *nptr); // long long형 정수로 변환함.
// double atof(const char *nptr);         // double형 실수로 변환함.  
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str01[] = "10";
	char str02[] = "20";
	
	printf("문자열을 숫자로 변환해서 곱한 값은 %d입니다.\n", atoi(str01) * atoi(str02));
	return 0;
}
