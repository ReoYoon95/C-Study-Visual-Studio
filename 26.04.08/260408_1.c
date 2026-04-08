#include <stdio.h>

void practice(void);
void practice1(void);
void practice2(void);

int main(void) {
	practice();
	practice1();
	practice2();

	return 0;
}

void practice(void) {
	printf("\n 소 프 트 %d 웨어 %lf %c %s\n", 10, 20.5, 'a', "aaaa");
}

void practice1(void) {
	printf("%+5d\n", 12);
	printf("%07d\n", 14);
}

void practice2(void) {
		printf("%d는 16진수로는 %#x, 8진수로는 %#o입니다.\n", 12, 12, 12);
		//16진수 8진수인지 모르면 샵을 붙여주면됌
		printf("%7.2lf", 12.34567);
}		
