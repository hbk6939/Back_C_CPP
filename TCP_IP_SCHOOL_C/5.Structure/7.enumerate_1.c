// 열거체
// 열거체(enumerated types)는 새로운 타입을 선언하면서, 동시에 해당 타입이 가질 수 있는 정수형 상숫값도 같이 명시할 수 있는 타입입니다.
// 이때 상숫값을 따로 명시하지 않으면 0부터 시작되며, 그 다음 멤버의 값은 바로 앞 멤버의 값보다 1만큼 증가되며 정의됩니다.
#include <stdio.h>

enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};

int main(void)
{
	enum Days today;
	
	today = MON;
	
	if (today >= SAT && today <= SUN)
	{
		puts("\n오늘은 주말이네요~ 주말에도 열심히 공부하는 여러분은 최고에요!");
	}
	else
	{
		printf("주말까지 %d일 남았어요~ 조금만 더 힘내자구요!", SAT - today);
	}

	puts("\n\n각각의 열거체 멤버에 해당하는 정수값은 다음과 같습니다.");
	printf("%d %d %d %d %d %d %d\n\n", MON, TUE, WED, THU, FRI, SAT, SUN);
	return 0;
}
