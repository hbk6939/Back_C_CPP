// fscanf() 함수
// fscanf() 함수는 지정된 스트림으로부터 다양한 서식 변환 문자를 이용하여 문자열을 읽어 들이는 함수입니다.

// #include <stdio.h>
// int fscanf(FILE * restrict stream, const char * restrict format, ...);  

// fscanf(1. 스트림을 결정할 FILE 구조체 변수의 포인터, 2. 읽어 들일 문자열의 서식)
// return -성공-> 읽어 들인 변수의 개수를 반환
// return -실패-> EOF를 반환



// fprintf() 함수
// fprintf() 함수는 지정된 스트림에 다양한 서식 변환 문자를 이용하여 문자열을 출력(저장)하는 함수입니다.

// #include <stdio.h>
// int fprintf(FILE * restrict stream, const char * restrict format, ...);  


// fprintf(1. 스트림을 결정할 FILE 구조체 변수의 포인터, 2. 출력할 문자열의 서식)
// return -성공-> 쓰기(저장)에 성공하면 저장한 문자열의 크기를 바이트 단위로 반환
// return -실패-> 실패하면 음수를 반환


// 다음 예제는 fprintf()함수와 fscanf() 함수를 이용해 서식에 맞춰 문자열을 읽어 들여 모니터에 출력하는 예제입니다.
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int scan_num, int_num;
    double double_num;
    char str[100];
 
    /* 파일 open */
    FILE* ptr_file = fopen("text_fscanf.txt", "r");
    // ...
    // fscanf 함수를 사용하여 파일로부터 문자열을 서식에 맞춰서 읽어들임.
    while(scan_num = (fscanf(ptr_file, "%d %lf %s", &int_num, &double_num, str)) != EOF)
    {         
        // fprintf 함수를 사용하여 모니터에 서식에 맞춰서 문자열을 옮겨적음.         
        fprintf(stdout, "\n%d %f %s\n\n", int_num, double_num, str);
    }
    
    /* 파일 close */
    // ...
    return 0;
}


