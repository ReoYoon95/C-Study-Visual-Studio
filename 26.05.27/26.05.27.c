#include <stdio.h>

int example9_1();
int add(int x, int y);
int example9_2(void);
int example9_3(void);
void show1(void);
void show2(void);
int example9_4(void);
void sub(void);
int example9_5(void);
int example10_1(void);
int example10_2(void);
int example10_3(void);
int example10_4(void);
int example10_5(void);
int example10_6(void);



int main(void)
{
	//sub();
	//sub();
	//sub();
	//example10_1();
	//example10_3();
	example10_6();

	return 0;
}


int example9_1(void)
{
	int x, a = 1, b = 2;
	x = add(1, 2);//반환값을 x에 대입
	printf("%d\n", x);
	printf("%d\n", add(2, 3));
	x = add(a, b);
	printf("%d\n", x);
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int example9_2(void)
{
	int k = 10;		//지역 변수
	printf("%d ", k);		//10
	{
		int k = 20;		//지역 변수
		k += 10;

		printf("%d ", k);  //30
	}
	k += 5;
	printf("%d ", k);	//15
	return 0;
}

//전역변수는 프로그램 시작이 만들어지고 끝나야지 사라진다.
//지역변수는 그 블록안에서만 사용되는 것, 작업이 끝나면 사라짐.
//정적변수는 그 블록안에서만 사용되나, 그 함수를 다시 호출하면 살아남.
//
//int example9_3(void)
//{
//	//전역 변수
//	printf("main()에서 x는 %d\n", x);
//	show1();
//	printf("show1()호출 후 x는 %d\n", x);
//	show2();
//	printf("show2()호출 후 x는 %d\n", x);
//	return 0;
//}
//
//
//void show1(void)
//{
//	printf("show1()에서 x는 %d\n", ++x);
//}
//
//void show2(void)
//{
//	int x = 10;  //지역 변수
//	printf("show2()에서 x는 %d\n", x);
//}

int example9_4(void)
{
	auto int a = 1;	//여기서 auto는 생략가능
	{
		int a = 2;	//auto 변수
		{
			int a = 3;	//auto 변수
			printf("%d ", a);//3
		}
		printf("%d ", a);//2
	}
	printf("%d ", a);//1
	return 0;
}

void sub(void)
{
	auto int x = 10;  //auto는 생략가능
	static int y = 10; //처음 실행시 한번만 초기화
	printf("x=%d, y=%d\n", x, y);
	x++;
	y++;
}



int gx = 12, gy = 24;               // 전역변수, 데이터영역에
int example9_5(void)
{
	auto int ax = 15, ay = 25;   // auto변수, 스택에
	static int sx = 10, sy = 20;  // static변수, 데이터영역에
	printf("ax=%d 주소=%p, ay=%d 주소=%p\n", ax, &ax, ay, &ay);
	printf("gx=%d 주소=%p, gy=%d 주소=%p\n", gx, &gx, gy, &gy);
	printf("sx=%d 주소=%p, sy=%d 주소=%p\n", sx, &sx, sy, &sy);
	return 0;
}

int example10_1(void)
{
	int x[3] = { 0 };
	x[2] = 1;
	printf("%d\n", x[0]);

	return 0;
}

int example10_2(void)
{
	int han[10] = { 10,20 };
	//int han1[2] = { 10,20,30 };// error C2078: 이니셜라이저가 너무 많습니다.
	int han2[10] = { 0 };
	printf("%d %d %d\n", han[0], han[1], han[2]);
	printf("%d %d %d\n", han2[0], han2[1], han2[2]);
	return 0;
}

int example10_3(void)
{
	int i, num[5];
	printf("5개의 수를 입력받아 역순으로 출력합니다.\n");
	for (i = 0; i < 5; i++) {
		printf("%d번째 수를 입력하세요=", i + 1);
		scanf_s("%d", &num[i]);
	}
	for (i = 4; i >= 0; i--) {
		printf("%d -> ", num[i]);
	}
	return 0;
}

int example10_4(void) {

	char st[] = "soft";
	printf("%s\n", st);
	return 0;
}

int example10_5(void) {

	char name[10];
	printf("당신의이름을입력하세요=");
	//scanf("%s", name); //gets(name);와차이점?
	//scanf_s("%s", name, (unsigned int)sizeof(name));
	//scanf("%9s", name); //9개만 받음. 마지막은 널문자.
	scanf_s("%s", name, (unsigned int)sizeof(name));
	printf("당신의이름은%s입니다.\n", name);
	return 0;
}

int example10_6(void)
{
	int i, num[5], kor[5], eng[5], mat[5], total[5];
	double avgkor = 0.0, avgeng = 0.0, avgmat = 0.0;
	double avg[5];
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃     성적처리프로그램입니다.     ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	for (i = 0; i < 5; i++) {
		printf("%d번째학생의학번을입력하고Enter를누르세요=", i + 1);
		scanf_s("%d", &num[i]);
		printf("국어점수를입력하고Enter를누르세요=");
		scanf_s("%d", &kor[i]);
		printf("영어점수를입력하고Enter를누르세요=");
		scanf_s("%d", &eng[i]);
		printf("수학점수를입력하고Enter를누르세요=");
		scanf_s("%d", &mat[i]);
		total[i] = kor[i] + eng[i] + mat[i];
		avg[i] = total[i] / 3.0;
		avgkor = avgkor + kor[i];
		avgeng = avgeng + eng[i];
		avgmat = avgmat + mat[i];
		printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
		printf("┃     성적처리결과입니다.       ┃\n");
		printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		printf("학번총점평균\n");
		for (i = 0; i < 5; i++) {
			printf("%3d %6d    %7.2f\n", num[i], total[i], avg[i]);
		}
		printf("국어평균: %g\n영어평균: %g\n수학평균: %g\n",
			avgkor / 5., avgeng / 5., avgmat / 5.);

	}
	return 0;
}