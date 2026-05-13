#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  //_getche()


void example7_1();
void example7_2();
int example7_3();
int example7_4();
int example7_5();
int example7_6();
int example7_7();
int example7_19();
int example7_20();
int example7_21();
int example7_22();
int example7_23();
int example7_24();
int example7_25();
int example7_26();
int example7_27();
int example7_29();
int example7_30();
int example7_31();
int example7_32();



int main(void) {
	//example7_22();
	//example7_23();
	//example7_25();
	//example7_26();
	example7_32();

	return 0;
}

void example7_1(void){
	//for (;;) {//무한루프
	for (int i = 0; i < 10; i++) {
		printf("Name"); 
	}
}

void example7_2(void) {
	for (int i = 0; i < 10; i++) {
		printf("%04d : Name\n", i + 1);
	}
}

int example7_3(void) {
	int i;
	for (i = -5; i < 10; i++) {
		printf("%d", i);
	}
	return 0;
}

int example7_4(void) {
	int i;
	for (i = 1; i <= 10; i++) {
		printf("%*d\n",i, i);
	}
	return 0;
}

int example7_5(void) {
	int i;
	for (i = 0; i <= 10; i++);
	//세미콜론으로 끝나면 한번만 반복하게 됌.
		printf("%*d\n", i, i);
	return 0;
}
//중괄호 열고 닫고를 블록이라고 함.

int example7_6(void) {
	for (int i = 100; i > 0; i--) {
		if (i % 5 == 0) printf("%d\t", i);
		else continue;
	}
	return 0;
}

int example7_7(void) {
	for (int i = 100; i > 0; i -= 5) {
		printf("%d\t", i);
	}
	return 0;
}

int example7_19(void) {
	char op;         // 연산자 저장 변수
	int num1, num2; // 피연산자 저장 변수

	while (1) {

		printf("덧셈과 뺄셈만 가능합니다(종료0+0)\n");
		printf("계산하려는 수식(예:10+20)을 입력하세요:");
		scanf_s("%d%c%d", &num1,
			& op, (unsigned int)sizeof(op), 
			&num2); //10+20
		if (num1 == 0 && num2 == 0 && op == '+') break;

		switch (op) {
			case '+':
				printf("덧셈 결과는 %d입니다.\n", num1 + num2);
				break;
			case '-':
				printf("뺄셈 결과는 %d입니다.\n", num1 - num2);
				break;
			default:
				printf("다시 입력하세요\n");
				break;
		}
	}
	return 0;
}


int example7_20(void)
{
	int n, sum = 0;	//n은 선언만,초기화 안됌 포문에서 초기화.

	for (n = 1; n <= 100; n++) {
		sum = sum + n;
		printf("%d번째시도 : %d\n",n , sum);
	}
	return 0;
}


int example7_21(void)
{
	int i;
	for (i = 0; i < 128; i++)
		printf("%3d=%c\t", i, i);
	return 0;
}

int example7_22(void) {
	int n1 = 0;
	int n2 = 0;
	int sum = 0;
	int count = 0;
	int max = INT_MIN;
	int min = INT_MAX;
	double avr = 0; 
	
	printf("입력할 수의 갯수를 입력하십시오:");

	while(1) {
		scanf_s("%d", &count);

		if (count < 1) {
			printf("잘못된 숫자를 입력했습니다. 다시 입력하시오 :");
			continue;
		}

		for (int i = 0; i < count; i++) {
			printf("%d번째 수를 입력하세요 : ", i + 1);
			scanf_s("%d", &n1);
			printf("%d번째 숫자는 %d입니다.\n", i + 1, n1);
			sum += n1;
			max = (n1 > max) ? n1 : max;
			min = (n1 < min) ? n1 : min;
			avr = (double)sum / count;
		}

		printf("===================================");
		printf("입력하시는 숫자는 총 %d개입니다.\n", count);
		printf("입력하시는 숫자의 총합은 %d입니다.\n", sum);
		printf("입력하시는 숫자의 최대값은 %d 입니다.\n", max);
		printf("입력하시는 숫자의 최소값은 %d 입니다.\n", min);
		printf("입력하시는 숫자의 평균값 %.2lf입니다.\n", avr);

	}
}

int example7_23(void) {
	int n = 0;
	int m = 0;

	for (n = 1; n <= 1000; n++) {
		printf("%d", n);
		for (m = 1; m <= n * 10000; m++);
	}
	//이중포문으로 뒤에 포문이 숫자가 올라갈 수록 더 오래걸리도록 지연시킴
	return 0;
}

int example7_24(void)
{
	int n, m;

	for (n = 1; n <= 1000; n++)
	{
		printf("%d ", n);
		for (m = 1; m <= 1000000000 / n; m++);
		//점점 빠르게
	}
	return 0;
}

int example7_25(void)
{
	int n, m;
	puts("작업을 시작합니다.");
	for (n = 1; n <= 100; n++) {
		printf("%d%%\b\b\b\b", n);
		for (m = 1; m <= n * 1000000; m++);
	}
	puts("작업이 완료되었습니다.");
	return 0;
}

int example7_26(void) {
	int i, j;
	for (i = 1; i <= 10; i++) {
		for (j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

int example7_27(void) {
	int dan = 1;
	int gop = 1;
	for (dan = 2; dan <= 19; dan++) {   //단
		printf("*%d단*\n", dan);
		printf("====================\n");
		for (gop = 1; gop <= 19; gop++) { //곱
			printf("%3dx%3d=%4d\t", dan, gop, dan * gop);
			if (gop % 3 == 0) printf("\n");
		}
		printf("\n\n"); //매단의끝에서개행
	}
	return 0;
}


int example7_29(void) {

	char key; 

	printf("키 하나를 누르세요.\nq를 누르면 프로그램을 종료합니다 :\n");
	do{
		key=_getche();
	}while(key !='q');
	printf("\n바이~~\n");
	return 0;
}

int example7_30(void)
{
	int score;
	printf("당신의 점수를 입력하고 Enter를 누르세요\n");
	do {
		printf("점수가 0에서 100사이의 값이 아니면 다시 입력해야 합니다:");
		scanf_s("%d", &score);
	} while (!(score >= 0 && score <= 100));
	if (score < 60) printf("60점 미만이므로 재수강해야 합니다.\n");
	else printf("60점 이상이므로 Pass입니다.\n");
	return 0;
}


int example7_31(void)
{
	int menu;
	do {
		printf("1:추가\n");
		printf("2:삭제\n");
		printf("3:저장\n");
		printf("4:불러오기\n");
		printf("원하는 작업을 선택하세요:");
		scanf_s("%d", &menu);
	} while (!(menu >= 1 && menu <= 4));
	printf("%d를 선택했습니다.\n", menu);
	return 0;
}


int example7_32(void)
{
	int n = 1; 
	long long sum = 0;

	while (1) {
		sum += n;
		if (sum > 100000000000) break;
		++n;
	}
	printf("n=%d, sum=%lld\n", n, sum);
	return 0;
}