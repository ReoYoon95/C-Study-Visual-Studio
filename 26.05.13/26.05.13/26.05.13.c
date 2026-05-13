#include <stdio.h>




int main(void) {

	return 0;
}

void example7_1(void){
	//for (;;) {//무한루프
	for (int i; i < 10; i++) {
		printf("Name"); 
	}
}

void example7_2(void) {
	for (int i; i < 10; i++) {
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
	int sum;
	for (int i = 100; i > 0; i--) {
		if (i % 5 == 0) printf("%d\t", i);
		else continue;
	}
	return 0;
}

int example7_7(void) {
	int sum;
	for (int i = 100; i > 0; i -= 5) {
		printf("%d\t", i);
	}
	return 0;
}

int example7_19(void) {
	char op;         // 연산자 저장 변수
	int num1, num2; // 피연산자 저장 변수
	printf("덧셈과 뺄셈만 가능합니다\n");
	printf("계산하려는 수식(예:10+20)을 입력하세요:");
	scanf("%d%c%d", &num1, &op, &num2); //10+20

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
	return 0;
}


int example7_20(void)
{
	int n, sum = 0;

	for (n = 1; n <= 100; n++) sum = sum + n;
	printf("%d\n", sum);
	return 0;
}