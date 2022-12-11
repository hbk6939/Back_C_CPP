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



// strcmp() 함수와 strncmp() 함수
// strcmp() 함수와 strncmp() 함수는 문자열의 내용을 비교하는 함수입니다.
// int strcmp(const char *s1, const char *s2);  
// 1) strcmp(문자열1, 문자열2)
// 2) strncmp(문자열1, 문자열2, 비교할 문자 개수) 
// 2-1) 이 함수는 일치하지 않는 문자를 만나거나, 세 번째 인수로 전달된 문자의 개수만큼 비교를 계속합니다.
// (문자열1 > 문자열2) -> return 양수
// (문자열1 == 문자열2) -> return 0
// (문자열1 < 문자열2) -> return 음수


// 다음 예제는 strcmp() 함수를 이용하여 두 문자열을 비교하는 예제입니다.
// strcmp() 함수는 문자열을 비교하는 함수이므로, 문자를 비교할 때에는 관계연산자 '=='를 사용해야 합니다.
#include <stdio.h>
#include <string.h>  

int main(void)
{
    char str[20];
    char ch;  
 
    while (1)
    {
        puts("미국의 수도를 입력하세요 :");
        scanf("%s", str);
		
        if (strcmp(str, "워싱턴") == 0 || strcmp(str, "washington") == 0) // 문자열의 비교
        {
            puts("정답입니다!");
            break;
        }
        else
            puts("아쉽네요~");
		
		while (getchar() != '\n'); // fflash(stdin)은 비표준
        
        puts("\n이 프로그램을 끝내고자 한다면 'q'를 눌러주세요!");
        puts("계속 도전하고자 하시면 Enter를 눌러주세요!");
		
        scanf("%c", &ch);
        if (ch == 'q') // 문자의 비교
        {
            break;
        }
        
    }
    return 0;
}