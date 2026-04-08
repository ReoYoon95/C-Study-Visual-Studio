#include <stdio.h>

void practice(void);
void practice1(void);
void practice2(void);
void practice3(void);
void practice4(void);
void practice5(void);
void practice6(void);
void practice7(void);
void practice8(void);

int main(void) {
	//practice();
	//practice1();
	//practice2();
	//practice3();
	//practice4();
	//practice5();
	//practice6();
	//practice7();
	practice8();

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

void practice3(void) {
	printf("123456789012345678901234\n");
	printf("%d%d%d\n", 100, -200, 300);
	printf("%d %d %d\n", 100, -200, 300);
	printf("%-8d%-8d%-8d\n", 100, -200, 300);
	printf("%+8d%8d%8d\n", 100, -200, 300);
	printf("%5d,%05d\n", 100, 100);
}

void practice4(void) {
	int  n1, n2, n3;
	printf("숫자 두 개를 스페이스로 구분하여 입력하세요=>");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("입력받은 세 수는 %d, %d, %d이고, 합은 %d입니다.\n", n1, n2, n3, n1 + n2 + n3);
}

void practice5(void) {
	char ch1, ch2, ch3;
	printf("1문자를 입력하세요=>");
	scanf_s("%c", &ch1, (unsigned int)sizeof(ch1));  //%c는 한 문자를 키보드 버퍼에서 가져옴  

	printf("2문자를 입력하세요=>");
	scanf_s("%c", &ch2, (unsigned int)sizeof(ch2));  // 엔터나 스페이스도 하나의 문자 

	printf("3문자를 입력하세요=>");
	scanf_s("%c", &ch3, (unsigned int)sizeof(ch3));

	printf("\n입력한 3개의 문자는 %c %c %c\n", ch1, ch2, ch3);
}

void practice6(void) {
	putchar('\n');//주의 : 큰따옴표가 아닌 작은따옴표로 감쌈
	putchar('A');
	putchar('\t');
	putchar(65);//숫자 0~127만 가능하며 해당 ASCII 코드가 출력	
}

void practice7(void) {
	printf("당신의 나이를 입력하세요 : ");
	int age;
	scanf_s("%d", &age);
	printf("당신의 나이는 \"%d\" 세입니다.", age);
}

void practice8(void) {
	int  kor, eng, mat, total;
	double avg;

	printf("총점과 평균을 구하는 프로그램입니다.\n");

	printf("국어 점수를 입력하고 Enter를 누르세요=");
	scanf_s("%d", &kor);

	printf("영어 점수를 입력하고 Enter를 누르세요=");
	scanf_s("%d", &eng);

	printf("\n수학 점수를 입력하고 Enter를 누르세요=");
	scanf_s("%d", &mat);

	total = kor + eng + mat;
	avg = total / 3.0;

	printf("당신의 총점은 %d 이고, 평균은 %.2lf 입니다.\n", total, avg);
	return 0;
}