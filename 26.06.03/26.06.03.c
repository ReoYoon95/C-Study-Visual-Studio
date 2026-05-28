#include <stdio.h>
#include <stdlib.h>

int example1(void);
int example1_1(void);





int main(void) {

	printf("예제1번\n");
	example1();
	printf("예제1번 변형\n");
	example1_1();


	return 0;
}

int example1(void) {

	int num[3];	//0번인덱스부터 2번까지 총 3개 생성

	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	//num[3] = 40;	//3번인덱스는 존재하지 않기에 에러.
	printf("%d, %d, %d\n", num[0], num[1], num[2]);

	return 0;
}

int example1_1(void) {

	char name[10] = "Reo";	//10칸짜리 배열 생성후, 이름으로 초기화.

	name[3] = ' ';	//위의 이름은 2번인덱스까지 사용했기에 3번부터 초기화시작.
	name[4] = 'Y';
	name[5] = 'O';
	name[6] = 'O';
	name[7] = 'N';

	printf("%s, %c, %c, %c, %c, %c, %c\n", name, name[3], name[4], name[5], name[6], name[7], name[9]);
	//배열 마지막 인덱스는 항상 널문자.
	return 0;
}

int example2(void) {
	
	int x = 1;		//변수 선언
	int* px = &x;	//포인터변수 선언
	int y = x;		//y에 x값 넣기
	printf("%d\n", y);
	y = &x;	//y의 값에 x의 주소값을 넣음
	printf("%d %p %d\n", x, &x, y);

	return 0;
}