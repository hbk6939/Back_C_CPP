// 미리 정의된 매크로(predefined macro)
// C언어에서는 컴파일러가 참고해야 할 정보를 알려주기 위해서 몇몇 매크로를 미리 정의하여 제공하고 있습니다.
// 미리 정의된 매크로는 #define 선행처리 지시자로 정의하지 않아도 사용할 수 있으나, 사용자가 재정의할 수는 없습니다.

// __DATE__	선행처리가 수행된 날짜를 "Mmm dd yyyy"형식으로 나타낸 문자열
// __TIME__	선행처리가 수행된 시간을 "hh:mm:ss"형식으로 나타낸 문자열
// __FILE__	현재 소스 파일의 이름을 나타내는 문자열
// __LINE__	현재 소스 파일에서 처리중인 라인 번호를 나타내는 문자열
// __STDC__	컴파일러가 C언어 표준을 따르면 1로 설정함.
// __STDC_HOSTED__	호스트 환경이 아니면 0, 호스트 환경이면 1로 설정함.


#include <stdio.h>

int main(void)
{
	printf("\n__DATE__ 선행처리가 수행된 날짜는 %s입니다.\n", __DATE__);
	printf("__TIME__ 선행처리가 수행된 시간은 %s입니다.\n", __TIME__);
	printf("__LINE__ 현재 소스 파일에서 처리중인 라인 번호는 %d입니다.\n", __LINE__);
	printf("__STDC__ : %d\n", __STDC__);
	printf("__STDC_HOSTED__ : %d\n\n", __STDC_HOSTED__);
	return 0;
}