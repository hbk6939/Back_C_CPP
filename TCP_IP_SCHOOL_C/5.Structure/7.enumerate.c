// 열거체
// 열거체(enumerated types)는 새로운 타입을 선언하면서, 동시에 해당 타입이 가질 수 있는 정수형 상숫값도 같이 명시할 수 있는 타입입니다.
// 이러한 열거체를 이용하면 프로그램의 가독성이 높아지고, 변수가 지니는 값에 의미를 부여할 수도 있게 됩니다.
#include <stdio.h>

enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

int main(void)
{
	enum Weather wt;
	
	wt = SUNNY;
		
	switch (wt)
	{
		case SUNNY:
			puts("오늘은 햇볕이 쨍쨍!");
			break;
		case CLOUD:
			puts("비가 올락말락하네요!");
			break;
		case RAIN:
			puts("비가 내려요.. 우산 챙기세요!");
			break;
		case SNOW:
			puts("오늘은 눈싸움하는 날!");
			break;
		default:
			puts("도대체 무슨 날씨인건가요!!!");
	}
	
	puts("각각의 열거체 멤버에 해당하는 정수값은 다음과 같습니다.");
	printf("%d %d %d %d\n", SUNNY, CLOUD, RAIN, SNOW);
	return 0;
}
