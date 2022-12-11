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



// strcpy() 함수와 strncpy() 함수
// strcpy() 함수와 strncpy() 함수는 문자열을 복사하는 함수입니다.
// char *strcpy(char * restrict s1, const char * restrict s2);  
// char *strncpy(char * restrict s1, const char * restrict s2, size_t n);   
// strncpy(기준 문자열, 복사될 문자열, 복사할 문자열의 최대 길이)
// 인수 1번째에다, 인수 2번째를, 인수3의 개수 만큼 복사

#include <stdio.h>
#include <string.h>
void func_strncpy1(void);
void func_strncpy2(void);

int main(void)
{
	func_strncpy1();
	func_strncpy2();
	
	return 0;
}

void func_strncpy1(void)
{
	char str01[] = "C is Cool!!!";
	char str02[100] = "SSSSSSSSSSSSSSSSSS";
	
	// str02 배열의 크기만큼만 복사를 진행하며, 마지막 한 문자는 널 문자를 위한 것임 
	// 인수 1번째에다, 인수 2번째를, 인수3의 개수 만큼 복사
	strncpy(str02, str01, sizeof(str02)-1);
	str02[sizeof(str02)-1] = '\0';	// 이 부분을 주석 처리하면, 맨 마지막에 널 문자를 삽입하지 않음 
	puts(str02);
	printf("%ld %ld %ld %ld \n", sizeof(str01), sizeof(str02), strlen(str01), strlen(str02));
}

// 다음 예제는 strncpy() 함수를 이용하여 문자열의 일부분만을 수정하는 예제입니다.
// strncpy() 함수의 첫 번째 인수에 배열 이름을 이용한 포인터 연산을 사용하여 수정을 시작할 지점을 지정할 수 있습니다.
void func_strncpy2(void)
{
	char str1[30] = "C is cool!";
	char str2[30] = "C is cool!";
	
	// 인수 1번째에다, 인수 2번째를, 인수3의 개수 만큼 복사
	strncpy(str1 + 5, "nice", 4);	// 배열 이름을 이용한 포인터 연산으로 수정할 부분의 시작 부분을 지정함 
	puts(str1);
	
	strncpy(str2 + strlen(str2)-1, " and nice!", 20);	// 배열 이름을 이용한 포인터 연산으로 수정할 부분의 시작 부분을 지정함 
	puts(str2);
}
