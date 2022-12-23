// fgetc() 함수
// fgetc() 함수는 지정된 스트림으로부터 하나의 문자를 읽어 들이는 함수입니다.
// 이 함수는 읽기에 성공하면 읽은 문자를 반환하고, 파일의 끝에 도달하면 EOF를 반환합니다.

// #include <stdio.h>
// int fgetc(FILE *stream);  

// fputc() 함수
// fputc() 함수는 지정된 스트림에 문자 하나를 출력(저장)하는 함수입니다.
// 이 함수는 저장에 성공하면 저장한 문자를 반환하고, 저장에 실패하면 EOF를 반환합니다.
 
// #include <stdio.h>
// int fputc(int c, FILE *stream);  


// 다음 예제는 fputc() 함수와 fgetc() 함수를 이용하여, 해당 파일의 모든 문자를 한 문자씩 읽어 들여 출력하는 예제입니다.
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
	// char ch;
	// C언어의 fgetc() 함수는 char형이 아닌 int형의 값을 반환하는 함수
	// 	EOF와 변수 ch를 비교할 때 EOF는 int형 값이므로, 변수 ch의 char형 값은 int형 값으로 자동 변환됩니다.
	// 이때 만약 변수 ch가 signed char형이라면, EOF는 '0xFFFFFFFF'로 제대로 변환되므로 별문제가 발생하지 않습니다.
	// 하지만 변수 ch가 unsigned char형이라면, EOF는 '0x000000FF'로 변환되므로 위의 while 문은 무한히 반복될 것입니다.
	int ch;
 
    /* 파일 open */
    FILE* ptr_file = fopen("text_readonly.txt", "r"); // "C언어 파일 입출력" 문자열이 저장된 파일

    if(ptr_file != NULL)
    {
		// C언어의 fgetc() 함수는 char형이 아닌 int형의 값을 반환하는 함수
		while(EOF != (ch = fgetc(ptr_file))) // fgetc() 함수를 사용하여 파일로부터 문자 한 개를 읽어들임.
        {
			fputc(ch, stdout);               // fputc() 함수를 사용하여 모니터에 문자 한 개를 출력함.
        }
		printf("\n\n");
    }else
	{
		printf("\n파일 열기 실패\n\n");
	}
 
    /* 파일 close */
    return 0;
}