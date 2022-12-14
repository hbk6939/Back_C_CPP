// fclose() 함수
// fclose() 함수는 파일을 닫아주는 함수입니다.
// 파일을 닫는다는 것은 파일과의 입출력을 위해 생성한 스트림을 소멸시키는 것을 의미합니다.
// 즉, 버퍼에 남아있는 데이터를 파일로 완전히 내보내고, 파일 입출력을 위해 내부적으로 생성했던 FILE 구조체를 해제합니다.
// C언어에서 다 사용한 파일은 반드시 fclose() 함수를 사용하여 닫아줘야 합니다.

// fclose() 함수는 인수로 닫고자 하는 파일을 가리키는 FILE 구조체 변수의 포인터를 전달받습니다.
// 이 함수는 파일을 성공적으로 닫으면 0을 반환하고, 해당 파일을 닫지 못했다면 EOF를 반환합니다.
 
// 다음 예제는 단순히 파일을 여닫는 동작을 하는 예제입니다.
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    /* 파일 open */
    FILE* ptr_file = fopen("example.txt", "w+");
    if (ptr_file == NULL)    // 파일을 열 수가 없다면, fopen() 함수는 널 포인터를 반환함.
    {
        puts("파일을 열 수가 없습니다!");
        exit(1);            // 현재의 C프로그램 자체를 완전 종료하고, 운영체제에 1을 반환함.
    }
    else
    {
        puts("파일을 성공적으로 열었습니다!");
    }
 
    /* 파일 close */
    if (fclose(ptr_file)!=0) // fclose() 함수는 파일을 성공적으로 닫으면 0을 반환함.
    {
        puts("파일을 닫을 수가 없습니다!");
        exit(1);
    }
    else
    {
        puts("파일을 성공적으로 닫았습니다!");
    }
    return 0;
}
// 위의 예제는 모드 문자열로 전달된 "w+"의 정의에 따라, 해당 파일을 쓰는 것만이 가능한 텍스트 모드로 열어줍니다.
// 이때 파일이 없으면 새 파일을 만들며, 파일이 존재하면 해당 파일의 모든 데이터를 지우고 파일을 열게 됩니다.

// 따라서 처음 이 프로그램을 동작시키면, 해당 이름의 파일이 존재하지 않으므로
// 현재 디렉터리에 example.txt라는 파일이 생성될 것입니다.
// 그 파일에 임의의 문자열을 입력하고 저장한 후, 
// 이 프로그램을 다시 실행시키면 해당 파일의 모든 내용이 지워지는 것을 확인할 수 있습니다.