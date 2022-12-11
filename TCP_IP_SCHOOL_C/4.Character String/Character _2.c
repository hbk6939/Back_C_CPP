// 문자 입출력 함수

// getchar() 함수
// getchar() 함수는 표준 입력 스트림(stdin)인 키보드로부터 하나의 문자를 입력받는 함수입니다.
// int getchar(void);

// fgetc() 함수
// fgetc() 함수는 getchar() 함수와 마찬가지로 표준 입력 스트림(stdin)인 키보드로부터 하나의 문자를 입력받는 함수입니다.
// 하지만 getchar() 함수와는 달리 문자를 입력받을 스트림을 인수로 전달하여 직접 지정할 수 있습니다.
// 따라서 fgetc() 함수는 키보드뿐만 아니라 파일을 통해서도 문자를 입력받을 수 있습니다.
// int fgetc(FILE *stream);

// putchar() 함수
// putchar() 함수는 표준 출력 스트림(stdout)인 모니터에 하나의 문자를 출력하는 함수입니다.
// int putchar(int c);

// fputc() 함수
// fputc() 함수는 putchar() 함수와 마찬가지로 표준 출력 스트림(stdout)인 모니터에 하나의 문자를 출력하는 함수입니다.
// 하지만 putchar() 함수와는 달리 문자를 출력할 스트림을 인수로 전달하여 직접 지정할 수 있습니다.
// 따라서 fputc() 함수는 모니터뿐만 아니라 파일을 통해서도 문자를 출력(저장)할 수 있습니다.
// int fputc(int c, FILE *stream);


// 단일 문자 입출력 함수를 사용하여, 'x'문자가 입력될 때까지 계속해서 영문자를 입력받고 출력하는 예제
#include <stdio.h>  

int main(void)
{
    char ch;
    printf("x가 입력될 때까지 영문자를 계속 입력받습니다 :\n");  
 
    while ((ch = getchar()) != 'x')
    {
        putchar(ch);
    }  
    printf("x를 입력하셨습니다.\n");  
    return 0;
}