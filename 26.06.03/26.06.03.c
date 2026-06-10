#include <stdio.h>
#include <stdlib.h>

int example1(void);
int example1_1(void);
int example2(void);
int example2_1(void);
int example3(void);
int example3_1(void);
int example4(void);
int example4_1(void);
int example5(void);
int example5_1(void);

struct Man {
	char name[10];
	int age;
	double weight;
};

struct score {
	int hakbun;
	char name[10];
	int kor, eng, tot;
	double ave;
};



int main(void) {

	//printf("예제1번\n");
	//example1();
	//printf("예제1번 변형\n");
	//example1_1();
	//printf("예제2번\n");
	//example2();
	//printf("예제2번 변형\n");
	//example2_1();
	printf("예제3번\n");
	example3();
	printf("예제3번 변형\n");
	example3_1();
	printf("예제4번\n");
	example4();
	printf("예제4번 변형\n");
	example4_1();
	printf("예제5번\n");
	example5();
	printf("예제5번 변형\n");
	example5_1();


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
	int *px = &x;	//포인터변수 선언
	//int y = x;		//y에 x값 넣기
	//printf("%d\n", y);
	int y = *px;	//y의 값에 x의 주소값을 넣음
	printf("%d %p %d\n", x, &x, y);

	return 0;
}

int example2_1(void) {

	int math = 100;	
	int *mathScore = &math;
	int myScore = *mathScore;	
	printf("%d %p %d\n", math, &math, myScore);

	return 0;
}

// int *pi; -> 인티저형 값을가지고 있는 주소값 pi.
// char *pc -> 문자형 값을 가지고 있는 주소값 pc.
// 위의 형태에 따라 그 값의 주소를 가지고 있는 것은 아님.

//struct -> 다른 언어의 클래스와 같은 구조.
//struct 변수이름{속성값; 속성값;};
//인스턴스의 속성값을 호출하는 방법은 변수이름.속성
//배열을 이용해서 구조체를 생성할 수 있음. 변수이름[i]
//배열로 인스턴스 생성시 예시는
// 변수이름[i] = (struct 스트럭트이름) {속성값, 속성값};

int example3(void) {
	int x;
	x = 10;
	struct Man han;
	han.age = 10;
	han.weight = 20.5;
	printf("%d %f\n", han.age, han.weight);
	return 0;
}

int example3_1(void) {
	
	struct Man Reo = { .age = 30, .weight = 20.1 }; //인스턴스 선언
	printf("%d %f\n", Reo.age, Reo.weight);
	Reo.age = 10;
	Reo.weight = 20.5;	//나이와 몸무게 재설정
	printf("%d %f\n", Reo.age, Reo.weight);
	return 0;
}

int example4(void) {
	struct Man gildong, sunhee, comso[160];
	gildong.age = 20;
	sunhee.weight = 52.5;
	comso[0].age = 25;
	printf("%d %f %d\n", gildong.age, sunhee.weight, comso[0].age);

	return 0;
}

int example4_1(void) {
	struct Man comso[10];	//10개짜리 구조체생성 
	comso[0] = (struct Man) {.age = 20, .weight = 21.5};	//0번과 1번 인스턴스 생성.
	comso[1] = (struct Man) {.age = 25, .weight = 55.5};

	for (int i = 0; i < 2; i++)//각각 출력해주는 반복문.
	{
		printf("%d번 학생의 나이는 %d, 몸무게는 %.2f입니다.\n",
			i + 1, comso[i].age, comso[i].weight);
	}

	return 0;
}

int example5(void) {
	struct score j, h = { 202345678, "han", 80, 89 };
	h.tot = h.kor + h.eng;
	j = h;
	printf("%d %s %d %d %d\n", h.hakbun, h.name, h.kor, h.eng, h.tot);
	printf("%d %s %d %d %d\n", j.hakbun, j.name, j.kor, j.eng, j.tot);

	return 0;
}

int example5_1(void) {
	struct score student[5];	//학생5명의 배열 생성.

	for (int i = 0; i < 5; i++)	//반복문으로 학번과 이름 임시등록 및 출력
	{
		student[i].hakbun = 20260000 + i;	//학번 char->int형으로 변형해서 반복문돌때마다 1식 늘어나게.
		sprintf_s(student[i].name, sizeof(student[i].name), "%d번학생", i + 1);
		//보안문제로 _s 를사용하고 크기를 제한.
		printf("학번 %d의 %s 입니다.", student[i].hakbun, student[i].name);
	}
	return 0;
}


