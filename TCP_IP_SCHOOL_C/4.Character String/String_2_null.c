// 널(NULL) 문자
// 문자형 배열로 선언된 문자열 변수는 문자열의 끝을 프로그램에 따로 알려주어야 합니다.
// 그래야만 프로그램이 실제 문자열에 속한 값과 그 외의 쓰레깃값을 구분할 수 있습니다.

// 따라서 C언어에서는 문자열에 속한 데이터가 끝나면, 문자열의 끝을 의미하는 문자를 하나 더 삽입해 줍니다.
// 이 문자를 널(NULL) 문자라고 하며, '\0'으로 표시하고 아스키코드값은 0입니다.

// 널 문자를 이용하여 널 문자를 제외한 문자열의 길이를 계산하여 출력해주는 예제
#include <stdio.h>

int main(void)
{
	int str_len = 0;
	char str[] = "string";
	
	while (str[str_len] != '\0')	// 널 문자가 나올 때까지 길이를 증가함 
	{
		str_len++;
	}
	
	printf("이 문자열의 길이는 %d입니다.\n", str_len); 
	return 0;
}
