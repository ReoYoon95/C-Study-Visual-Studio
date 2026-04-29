#include <stdio.h>

int chckScore(void);
int example6_9(void);
int example6_10(void);
int example6_11(void);
int example6_11_1(void);
int example6_12(void);
int example6_13(void);
int example6_14(void);
int example6_15(void);



int main(void) {

	chckScore();
	//example6_11_1();

	return 0;
}


int example6_9(void)
{
	//비트연산자
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


int example6_10(void)
{
	printf("%d  ", 90 << 1);   //180
	printf("%d  ", 90 * 2);    //180
	printf("%d  ", 90 << 2);   //360
	printf("%d  ", 90 << 3);   //720 
	printf("%d\n", 90 << 4);  //1440 

	printf("%d  ", 90 >> 1);   //45
	printf("%d  ", 90 / 2);     //45
	printf("%d  ", 90 >> 2);   //22
	printf("%d\n", 90 >> 3);  //11
	return 0;
}

int example6_11(void)
{
	//삼항 연산자
	int i = 2, j = 4, min;
	printf("%d\n", (i < j) ? i : j);

	min = (i < j) ? i : j;
	printf("%d\n", min);

	if (i < j) min = i;
	else min = j;
	printf("%d\n", min);
	return 0;
}

int example6_11_1(void)
{
	int i = 2, j = 4, k=1, max;

	max = (i < j) ? (j < k) ? k : j : (i < k) ? k : i;
	printf("%d\n", max);
	return 0;
}

int example6_12(void)
{
	//증감 연산자
	int a = 10, b = 10, c = 20, d = 20;
	int ap, bp, cm, dm;

	ap = ++a;	// a=a+1; ap=a;   ap=11, a=11 
	printf("a=%d, ap=%d\n", a, ap);

	bp = b++;	// bp=b;   b=b+1; bp=10, b=11 
	printf("b=%d, bp=%d\n", b, bp);

	cm = --c;//  c=c-1;   cm=c;  cm=19, c=19 
	printf("c=%d, cm=%d\n", c, cm);

	dm = d--;// dm=d;   d=d-1; dm=20, d=19 
	printf("d=%d, dm=%d\n", d, dm);
	return 0;
}


int example6_13(void)
{
	int x = 10, y = 4;
	double z, z1;
	printf("1:%d\n", 10 / 4); //2
	printf("2:%f\n", 10 / 4); //0.000000, 컴파일러에 따라 2.500000, 경고
	printf("3:%f %f %f\n", 10 / 4.0, 10.0 / 4, 10.0 / 4.0);//모두 2.500000
	printf("4:%d\n", x / y); // 2
	printf("5:%f\n", x / y); // 0.000000, 컴파일러에 따라 2.500000, 경고
	z = x / y; //double형인 z에 2를 저장하면 소수점만 더 붙음
	printf("6:%f\n", z); // 2.000000
	z = (double)x / y; //10.0/4
	printf("7:%f\n", z); // 2.500000
	z = x / (double)y; //10/4.0
	printf("8:%f\n", z); // 2.500000 
	z = (double)x / (double)y; //10.0/4.0
	z1 = (double)(x / y); //(double)(10/4)
	printf("9:%f %lf %lf\n", z, z, z1);// 2.500000 2.500000 2.000000  
	return 0;
}

int example6_14(void)
{
	int x;
	int y[10];

	printf("%zd  ", sizeof("I love you!"));//12
	printf("%zd  ", sizeof("대한"));	// 5(cp949) or 7(utf-8) 
	printf("%zd  ", sizeof(int));	// 4  
	printf("%zd  ", sizeof(x));	// 4, sizeof x라고 써도 됨 
	printf("%zd\n", sizeof(y));	// 40, sizeof y라고 써도 됨    
	return 0;
}

int example6_15(void)
{
	int a = 10, b = 20;
	printf("변수 a의 값=%d, 주소=%p\n", a, &a);
	printf("변수 b의 값=%d, 주소=%p\n", b, &b);
	return 0;
}

int chckScore(void) {
	int mat = 0;
	int eng = 0;
	int kor = 0;
	int n = 3;
	char name[20];
	int max = 0;
	//변수 생성 -> 오류방지를 위해 0값 대입

	printf("학생 이름을 입력하시오: ");
	scanf_s("%s", name, (unsigned int)sizeof(name));
	printf("수학 점수를 입력하시오: ");
	scanf_s("%d", &mat);
	printf("영어 점수를 입력하시오: ");
	scanf_s("%d", &eng);
	printf("국어 점수를 입력하시오: ");
	scanf_s("%d", &kor);
	//변수에 값 입력

	max = (mat < eng) ? (eng < kor) ? kor : eng : (mat < kor) ? kor : mat;
	//최고값 계산

	int total = mat + eng + kor;
	double avr = (double)total / n;
	//총점과 평균점
	printf("=========================================\n");
	printf("%s님의 성적은 아래와 같습니다.\n", name);
	printf("수학은 %d점, 영어는 %d점, 국어는 %d점, 가장 높은 과목의 점수는 %d점, 총점은 %d점, 평균%.2lf점 입니다.\n", mat, eng, kor,max, total, avr);

	return 0;
}