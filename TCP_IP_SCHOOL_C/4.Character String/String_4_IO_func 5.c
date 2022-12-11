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



// toupper() 함수와 tolower() 함수
// 이 함수들은 인수로 전달된 문자열의 영문자를 모두 대문자나 소문자로 변환시켜주는 함수입니다.
// int toupper(int c); // 문자열의 모든 영문자를 대문자로 변환함.
// int tolower(int c); // 문자열의 모든 영문자를 소문자로 변환함.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	int i, str_len;
	char str1[] = "Hello C World!";
	char str2[strlen(str1)];

	printf("원래 문자열 : %s\n", str1);
	
	str_len = strlen(str1);
	for (i = 0; i < str_len; i++)
	{
		str1[i] = toupper(str1[i]);
		str2[i] = tolower(str1[i]);
	}
	
	printf("toupper으로 바뀐 문자열 : %s\n", str1);
	printf("tolower으로 바뀐 문자열 : %s\n", str2);
	return 0;
}