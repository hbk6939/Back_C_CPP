#include <stdio.h>
#define PI 3.14

int main(void)
{
	double radius = 12;

	printf("원주율을 나타내는 PI의 값은 %.2f입니다.\n", PI);
	printf("원의 면적은 %.2f * %.2f * %.2f = %.2f입니다.\n", PI, radius, radius, PI * radius * radius);
	return 0;
}
