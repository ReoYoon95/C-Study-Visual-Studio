#include <stdio.h>

int chckScore(void);
int example6_9(void);

int main(void) {
	chckScore();

	return 0;
}


int example6_9(void)
{
	int a = 0x1;
	//2진수 0000 0000 0000 0000 0000 0000 0000 0001,16진수 0000 0001
	int b = 0x3;
	//2진수 0000 0000 0000 0000 0000 0000 0000 0011, 16진수 0000 0003     
	printf("%x\n", a & b);   //0000 0000 0000 0000 0000 0000 0000 0001
	printf("%x\n", a | b);   //0000 0000 0000 0000 0000 0000 0000 0011
	printf("%x\n", a ^ b);   //0000 0000 0000 0000 0000 0000 0000 0010
	printf("%x\n", a ^ b ^ b); //0000 0000 0000 0000 0000 0000 0000 0001
	printf("%x\n", ~a);    //1111 1111 1111 1111 1111 1111 1111 1110
	printf("%x\n", ~b);    //1111 1111 1111 1111 1111 1111 1111 1100
	//& 두 비트가 같을경우에
	//| 두 비트중 한개라도 있을경우
	//^ xor 둘이 다를경우 1 같을경우 0
	//~ 보수-> 1이면->0 영->1 

	return 0;
}

int chckScore(void) {
	int mat = 0;
	int eng = 0;
	int kor = 0;
	int n = 3;
	char name[10];

	printf("학생 이름을 입력하시오: ");
	scanf_s("%s", name, (unsigned int)sizeof(name));
	printf("수학 점수를 입력하시오: ");
	scanf_s("%d", &mat);
	printf("영어 점수를 입력하시오: ");
	scanf_s("%d", &eng);
	printf("국어 점수를 입력하시오: ");
	scanf_s("%d", &kor);

	int total = mat + eng + kor;
	double avr = (double)total / n;

	printf("%s님의 성적은 아래와 같습니다.\n", name);
	printf("수학은 %d점, 영어는 %d점, 국어는 %d점, 총점은 %d점, 평균%.2lf점 입니다.\n", mat, eng, kor, total, avr);

	return 0;
}