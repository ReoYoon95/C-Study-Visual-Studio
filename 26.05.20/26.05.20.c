#include <stdio.h>

void display(void);
void prtDoubNum(int x);
int doubNum(int x);
int add(int x, int y);
int add3Num(int x, int y, int z);
double avr3(int x, int y, int z);
char vending(int x);

int main(void) {

	//display();
	//prtDoubNum(3);
	//prtDoubNum(5);
	//int a = doubNum(3);
	//printf("%d\n", a);
	//printf("%d\n", doubNum(5));
	//int b = add(2, 3);
	//printf("%d\n", b);
	//int c = add3Num(1, 2, 3);
	//printf("%d\n", c);
	//double d = avr3(30, 40, 60);
	//printf("%.2lf\n", d);

	char x;
	x = vending(1);
	printf("%c\n", x);
	return 0;
}





//컨트롤m +o 하면 함수단위로 닫힘
//컨트롤m +ㅣ하면 함수단위로 열림
//c언어에서 메인함수는 단 한번만 사용가능하고 없어서는 안된다.
//void view(void);	//함수 선언 또는 원형



void display(void) {
	printf("hi\n");

}

void prtDoubNum(int x) {

	printf("%d\n", x * 2);
}

int doubNum(int x) {

	return x * 2;
}

int add(int x, int y) {

	return x + y;
}

int add3Num(int x, int y, int z) {
	return x + y + z;
}

double avr3(int x, int y, int z) {
	int sum = x + y + z;
	double avr = (double)sum / 3;
	return avr;
}

char vending(int x)
{
	switch (x)
	{
		case 1:
			return 'A';

		case 2:
			return 'B';

		case 3:
			return 'C';

		default: return 'D';

	}
}


