#include <stdio.h>



//void view(void);	//함수 선언 또는 원형
int example8_1(void)
{
	printf("메인 함수 : view호출 전\n");
	view();		//함수 호출
	printf("메인 함수 : view호출 후\n");
	return 0;
}

void example8_1.1(void)		//함수 정의
{
	printf("view함수\n");
}