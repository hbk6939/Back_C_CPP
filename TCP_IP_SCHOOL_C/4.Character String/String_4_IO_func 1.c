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



// strcat()함수와 strncat() 함수
// strcat()함수와 strncat() 함수는 하나의 문자열에 다른 문자열을 연결해주는 함수입니다.
// char *strcat(char * restrict s1, const char * restrict s2);  
// strcat(기준 문자열, 추가 문자열)

// 이때 기준 문자열이 저장된 배열의 공간이 충분하지 않으면, 배열을 채우고 남은 문자들이 배열 외부로 흘러넘칠 수 있습니다.
// 이러한 현상을 배열 오버플로우(overflow)라고 합니다.
// 배열 오버플로우 현상을 방지하기 위해서는 strcat() 함수 대신에 strncat() 함수를 사용하는 것이 좋습니다.

// strncat()
// char *strncat(char * restrict s1, const char * restrict s2, size_t n);
// strncat(기준 문자열, 추가 문자열, 추가할 문자열 최대길이)

#include <stdio.h>
#include <string.h>

int main(void)
{
	// 우선 널 문자를 포함한 총 14바이트 크기의 문자열을 19바이트 크기의 배열에 저장합니다.
	// 그리고 그 문자열에 정확히 5바이트 크기의 문자열을 추가하는 예제입니다.
	char str01[20] = "C language is ";	// 널 문자를 포함하여 15문자
	char str02[] = "Cool! and funny!";
		
	//strcat(str01, str02);		// 이 부분의 주석 처리를 삭제한 후 실행시키면 배열 오버플로우가 발생함 
	strncat(str01, str02, 8);	// 이렇게 최대 허용치를 설정해 놓으면 배열 오버플로우에 대해서는 안전해짐 
	puts(str01);
	printf("%s\n", str01);
	return 0;
}

