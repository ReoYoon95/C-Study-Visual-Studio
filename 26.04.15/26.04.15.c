#include <stdio.h>
#include "aa.h"	//내가 만든 헤더파일은 큰따옴표를 이용
#define AA  2
#define sum3(i,j,k)   ((i)+(j)+(k))
int test(void);

int main(void) 
{
	printf("%d\n", sum3(AA, 4, 6));
	printf("%d\n", sum3(AA, 4, 6) / 2);
	printf("%f\n", sum3(1.2, 2.3, 3.4));
	printf("%d\n", AA);
	test();

	return 0;
}

//5.6

int test(void)
{
	printf("__LINE__ : %d\n", __LINE__);
	printf("__DATE__ : %s\n", __DATE__);
	printf("__LINE__ : %d\n", __LINE__);
	printf("__TIME__ : %s\n", __TIME__);
	printf("__TIMESTAMP__ : %s\n", __TIMESTAMP__);
	printf("__FILE__ : %s\n", __FILE__);
	return 0;
}

int scoreChk(void)                   // 프로그램이 시작되는 메인 함수 선언
{                                // 프로그램의 시작을 알리는 중괄호
    // 1. 변수 및 배열 선언부
    char name[20];               // 이름을 저장하기 위한 문자형(char) 배열 공간 20칸 확보
    int kor, eng, mat, sci, total; // 4과목 점수와 총점을 저장할 정수형(int) 변수들 선언
    double avg;                  // 평균값을 소수점까지 저장할 실수형(double) 변수 선언

    // 꾸미기용 출력부
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"); // 화면에 상단 테두리 출력
    printf("┃ 성적 및 평균 산출 프로그램 (4과목) ┃\n"); // 프로그램 제목 출력
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n"); // 화면에 하단 테두리 출력

    // 2. 사용자 데이터 입력부
    printf("이름을 입력하세요: ");       // 이름을 입력하라는 메시지 출력
    scanf("%s", name);                   // 문자열(%s)을 입력받아 name 배열의 시작 주소에 저장

    printf("국어 점수 입력: ");          // 국어 점수 안내 메시지 출력
    scanf("%d", &kor);                   // 정수(%d)를 입력받아 kor 변수의 주소(&)에 저장

    printf("영어 점수 입력: ");          // 영어 점수 안내 메시지 출력
    scanf("%d", &eng);                   // 정수(%d)를 입력받아 eng 변수의 주소(&)에 저장

    printf("수학 점수 입력: ");          // 수학 점수 안내 메시지 출력
    scanf("%d", &mat);                   // 정수(%d)를 입력받아 mat 변수의 주소(&)에 저장

    printf("과학 점수 입력: ");          // 과학 점수 안내 메시지 출력
    scanf("%d", &sci);                   // 정수(%d)를 입력받아 sci 변수의 주소(&)에 저장

    // 3. 연산 처리부
    total = kor + eng + mat + sci;       // 입력받은 4과목의 변수값을 모두 더해 total에 대입
    avg = total / 4.0;                   // 총점을 실수 4.0으로 나누어 소수점까지 평균 계산

    // 4. 결과 출력부
    printf("\n========= [ %s 님의 성적표 ] =========\n", name); // 입력받은 이름을 포함한 헤더 출력
    printf("총점: %d 점\n", total);       // 정수형 서식(%d)을 사용하여 계산된 총점 출력
    printf("평균: %.2f 점\n", avg);       // 실수형 서식(%.2f)을 사용하여 소수점 둘째 자리까지 평균 출력
    printf("======================================\n");      // 하단 구분선 출력


    return 0;                            // 프로그램이 정상적으로 종료되었음을 운영체제에 알림 (0 반환)
}                                        // 메인 함수의 끝을 알리는 중괄호



//6.1

int operatorTest(void)
{
    printf("5+2-3*2/2=%d\n", 5 + 2 - 3 * 2 / 2);
    printf("10/4=%d\n", 10 / 4);
    printf("%f\n", 10 / 4);
    printf("%f %f %f\n", 10 / 4.0, 10.0 / 4, 10.0 / 4.0);
    printf("10%%4=%d\n", 10 % 4);
    return 0;
}


//6.3

int test1(void)
{
    int a = 5;
    printf("%d\n", a);
    a = a + 5; printf("%d\n", a);	// 10	
    a += 5; printf("%d\n", a);	// 15, a = a + 5 
    a -= 5; printf("%d\n", a);	// 10, a = a - 5
    a *= 5; printf("%d\n", a);	// 50, a = a * 5
    a /= 2; printf("%d\n", a);	// 25, a = a / 2
    a *= a + 5; printf("%d\n", a);//a = a*(a+5) = 25*30   
    return 0;
}

//6.4

int test2(void)
{
    int a = 10, b = 20;
    printf("%d\n", 1 < 2);
    printf("%d\n", 1 <= 2);
    printf("%d\n", 1 > 2);
    printf("%d\n", 1 >= 2);
    printf("%d\n", a > b);
    printf("%d\n", 'A' > 'B');
    printf("%d\n", 2.5 > 3.5);
    return 0;
}

//6.5
#include <stdio.h>
int test3(void)
{
    int a = 10, b = 20, c = 10;
    printf("%d\n", 1 == 2);	//0
    printf("%d\n", 1 != 2);	//1
    printf("%d\n", a == b);	//0
    printf("%d\n", a != b);	//1
    printf("%d\n", a == 10);	//1
    printf("%d\n", a == c);	//1
    printf("%d\n", a = c);	//10
    printf("%d\n", a = 1);	//1
    printf("%d\n", a = 0);	//0
    return 0;
}

//6.7

int test4(void)
{
    int score = 92;
    printf("%d\n", 92 >= 90 && 92 < 95);	//1 && 1
    printf("%d\n", 90 <= 92 < 95);	//1<95 잘못된 식
    printf("%d\n", 97 >= 90 && 97 < 95);	//1 && 0
    printf("%d\n", 90 <= 97 < 95);	// 1<95 잘못된 식
    if (score >= 90 && score < 95) printf("A1\n");
    if (90 <= score < 95) printf("A2\n"); //잘못된 식
    score = 97;
    if (score >= 90 && score < 95) printf("A1\n");
    if (90 <= score < 95) printf("A2\n");	//논리적 오류
    //97이 범위 내에 있지 않지만 범위 내에 있는 것처럼 참으로 인식
    return 0;
}

int test5(void)
{
    int year;
    printf("알고싶은연도를입력하세요: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("윤년입니다.\n");
    else
        printf("평년입니다.\n");
    return0;
}