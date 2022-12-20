// fflush() 함수
// fflush() 함수는 인수로 전달된 스트림에 연결된 버퍼를 비워줍니다.
#include <stdio.h>
int fflush(FILE *stream);

int main(void)
{
    char str[20];
    char ch;  
 
    puts("당신의 이름을 적어주세요 : ");
    scanf("%s", str);getchar();
    puts("당신의 성별을 약자로 적어주세요 : ");
    puts("(남성=M, 여성=F)");
    scanf("%c", &ch);getchar();
 
    if (ch=='m' | ch=='M')
    {
        printf("당신은 남성인 %s입니다.\n", str);
    }
    else if(ch=='f' | ch=='F')
    {
        printf("당신은 여성인 %s입니다.\n", str);
    }
    else
    {
        printf("%s님, 성별을 잘못 입력하셨습니다.\n", str);
    }
    return 0;
}
// fflush()은 입력스트림과 관련이 있다고 알고 있지만, 결과적으로는 출력스트림에만 관련이 있습니다.
// 출력스트림으론 stdout, stderr이 있습니다.
// Visual Studio 2013에서는 비표준함수인 fflush()를 허용해주고 있지만,
// Visual Studio2015부터 비표준함수인 fflush()가 사라졌기 때문에 위의 예제에서 fflush(stdin)을 사용하더라도
// 똑같은 현상이 반복될 것입니다.  그렇기 때문에 입력 버퍼를 지우기 위해서는
// fflush()함수가 아닌 getchar() 함수를 이용하여야 합니다.