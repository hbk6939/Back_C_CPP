#include <stdio.h>
// void 포인터는 주소값을 저장하는 것 이외에는 아무것도 할 수 없는 포인터입니다.

// void 포인터를 사용할 때에는 반드시 먼저 사용하고자 하는 타입으로 명시적 타입 변환 작업을 거친 후에 사용해야 합니다.
// ex) 인트형으로 사용하려 할 때 *(int*)ptr_num
 
int main(void)
{
	int num = 10;			// 변수 선언 
	void* ptr_num = &num;	// void 포인터 선언 
	
	printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);
	printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int*)ptr_num);
	
	*(int*)ptr_num = 20;	// void 포인터를 통한 메모리 접근 
	
	printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int*)ptr_num);
	return 0;
}
