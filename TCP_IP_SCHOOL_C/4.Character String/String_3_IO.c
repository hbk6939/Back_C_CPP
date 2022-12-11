// 문자열 입출력 함수

// fgets() 함수
// fgets() 함수는 키보드뿐만 아니라 파일에서도 문자열을 입력받을 수 있는 함수입니다.
// char *fgets(char * restrict s, int n, FILE * restrict stream);
// fgets(배열 시작주소, 문자열 최대길이, 입력스트림)

// puts() 함수
// puts() 함수는 표준 출력 스트림(stdout)인 모니터에 하나의 문자열을 출력하는 함수입니다.
// 이 함수는 모니터에 문자열을 출력한 다음에 자동으로 줄을 바꿔줍니다.
// int puts(const char *s);  
// puts(문자열 포인터)

// fputs() 함수
// fputs() 함수는 모니터뿐만 아니라 파일을 통해서도 문자를 출력(저장)할 수 있는 함수입니다.
// 이 함수는 puts() 함수와는 달리 문자열을 출력한 다음에 자동으로 줄을 바꿔주지 않습니다.
// int fputs(const char * restrict s, FILE * restrict stream);
// fputs(문자열 포인터, 출력스트림)
#include <stdio.h>

int main(void)
{
    char str[100];
 
    fputs("문자열을 입력해 주세요 :\n", stdout); // 출력(자동줄바꿈 X)
	
    fgets(str, sizeof(str), stdin); // 입력
	
    puts("입력하신 문자열 : "); // 출력(자동줄바꿈 O)
	
    puts(str); // 출력(자동줄바꿈 O)
    
	fputs("입력하신 문자열 : ", stdout); // 출력(자동줄바꿈 X)
    fputs(str, stdout); // 출력(자동줄바꿈 X)
    
	return 0;
}