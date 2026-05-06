#include <stdio.h>

int example7_1(void);
int example7_2(void);
int example7_3(void);
int example7_4(void);
int example7_5(void);
int example7_6(void);
int example7_7(void);
int example7_8(void);
int example7_9(void);
int example7_10(void);
int example7_11(void);
int example7_12(void);
int example7_13(void);
int example7_13_1(void);
int example7_14(void);
int example7_15(void);
int example7_16(void);
int example7_17(void);
int example7_18(void);
int example7_19(void);
int example7_20(void);
int example7_21(void);


int main(void) {
	//printf(example7_1);
	//printf(example7_2);
	//printf(example7_3);
	//printf(example7_4);
	//printf(example7_5);
	//printf(example7_6);
	//printf(example7_7);
	//printf(example7_8);
	//printf(example7_9);
	//printf(example7_10);
	//printf(example7_11);
	//printf(example7_12);
	//printf(example7_13);
	//printf(example7_13_1);
	//printf(example7_14);
	//printf(example7_15);
	//printf(example7_16);
	//printf(example7_17);
	//printf(example7_18);
	//printf(example7_19);
	//printf(example7_20);
	example7_21();

	
	

	return 0;
}

int example7_1(void) {

	int score;
	printf("당신의 점수를 입력하고 Enter를 누르세요 : ");
	scanf("%d", &score);

	if (score < 60) {
		printf("60점 미만이므로 재수강해야 합니다.\n");
	}
	// 한문장 일때는 중괄호를 안써도 되지만, 그 이상일때는 중괄호를 써줘야 함.

	return 0;
	
}

int example7_2(void)
{
	int score;
	printf("당신의 점수를 입력하고 Enter를 누르세요 : ");
	scanf("%d", &score);

	if (score == 0) printf("0점 입니다.\n");
	if (score) printf("0점이 아닙니다.\n");
	if (!score) printf("0점 입니다.\n");
	//9번째와 11번째는 같은 의미.
	return 0;
}

int example7_3(void)
{
	int score;
	printf("당신의 점수를 입력하고 Enter를 누르세요 : ");
	scanf("%d", &score);

	if (score >= 90 && score < 95) printf("A\n");
	//if(90<=score<95) printf("A2\n");   
	if (score >= 95 && score < 100) printf("A+\n");
	return 0;
}

int example7_4(void)
{
	int num;
	printf("주민등록번호 뒷 자리의 첫번째 숫자를 입력하세요 : ");
	scanf("%d", &num);

	if (num == 1 || num == 3) printf("당신은 남성이군요!\n");
	if (num == 2 || num == 4) printf("당신은 여성이군요!\n");
	return 0;
}

int example7_5(void)
{
	int num1, num2;
	printf("두 개의 다른 수를 입력하고 Enter를 누르세요:");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) printf("두 수 중 더 큰 수는 %d입니다.\n", num1);
	else printf("두 수 중 더 큰 수는 %d입니다.\n", num2);

	//if (num1 < num2) printf("두 수 중 더 큰 수는 %d입니다.\n", num2);
	return 0;
}

int example7_6(void)
{
	int score;
	printf("당신의 점수를 입력하고 Enter를 누르세요:");
	scanf("%d", &score);
	
	if (score < 60) {
		printf("60점 미만이므로 재수강해야 합니다.\n");
	}
	else {
		printf("60점 이상이므로 Pass입니다.\n");
	}

	//if (score < 60) 
	//	printf("60점 미만이므로 재수강해야 합니다.\n");
	//else 
	//	printf("60점 이상이므로 Pass입니다.\n");
	return 0;
}

int example7_7(void)
{
	int num1, num2, max;
	printf("두 개의 다른 수를 입력하고 Enter를 누르세요:");
	scanf("%d %d", &num1, &num2);

	//if (num1 > num2) max = num1;
	//else max = num2;

	max=(num1>num2) ? num1 : num2;
	//삼항 연산자.
	printf("더 큰 수는 %d입니다.\n", max);
	return 0;
}

int example7_8(void)
{
	int num;
	printf("당신의 주민등록번호 뒷 자리의 첫 번째 숫자를 입력하세요:");
	scanf("%d", &num);

	if (num == 1 || num == 3) printf("당신은 남성이군요!\n");
	else printf("당신은 남성이 아니군요!\n");
	return 0;
}

int example7_9(void)
{
	char ch;
	printf("키보드로 키 하나를 입력하세요=");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z') printf("영어 소문자입니다.\n");
	else  printf("영어 소문자가 아닙니다.\n");
	return 0;
}

int example7_10(void)
{
	int year;
	printf("2월이 29일까지 있어서 1년이 366일인 해를 윤년이라고 한다.\n");
	printf("연도가 평년인지 윤년인지를 출력해주는 프로그램입니다.\n");
	printf("알고 싶은 연도를 입력하세요 : ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("윤년입니다.\n");
	else
		printf("평년입니다.\n");

	return 0;
}

int example7_11(void)
{
	int num1, num2;
	// 배열 대신 포인터(*)를 사용하면 나중에 '='로 대입이 가능합니다.
	char* sex;
	char* from;

	printf("당신의 주민등록번호 뒷자리의 첫 번째 숫자를 입력하세요: ");
	scanf("%d", &num1);
	printf("국적을 입력하시오: (한국:1), (외국인:2) ");
	scanf("%d", &num2);

	// 성별 판별 로직
	if (num1 % 2 == 1 && num1 < 10) {
		sex = "남성"; // int a = 1; 처럼 대입 가능!
	}
	else if (num1 % 2 == 0 && num1 < 10) {
		sex = "여성";
	}
	else {
		printf("잘못된 성별 번호입니다.\n");
		return 0;
	}

	// 국적 판별 로직
	if (num2 == 1) {
		from = "한국인";
	}
	else if (num2 == 2) {
		from = "외국인";
	}
	else {
		printf("잘못된 국적 번호입니다.\n");
		return 0;
	}

	printf("당신은 %s이고 %s입니다.\n", sex, from);
	return 0;
}

int example7_12(void)
{
	char ch;
	printf("키보드로 키 하나를 입력하세요:");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z')
		printf("영어 소문자입니다.\n");
	else if (ch >= 'A' && ch <= 'Z')
		printf("영어 대문자입니다.\n");
	else
		printf("영문자가 아닙니다.\n");
	return 0;
}

int example7_13(void)
{
	int value;
	printf("1~3까지의 수를 입력하세요:");
	scanf("%d", &value);

	if (value == 1) printf("1을 입력하셨습니다.\n");
	else if (value == 2) printf("2를 입력하셨습니다.\n");
	else if (value == 3) printf("3을 입력하셨습니다.\n");
	else printf("잘못 입력하셨습니다.\n");
	return 0;
}

int example7_13_1(void)
{
	int value;
	printf("1~3까지의 수를 입력하세요:");
	scanf("%d", &value);

	switch (value) {
		case 1 : 
			printf("1을 입력하셨습니다.\n");
			break;
		case 2 : 
			printf("2를 입력하셨습니다.\n");
			break;
		case 3 : 
			printf("3을 입력하셨습니다.\n");
			break;
		default: 
			printf("다시 입력하세요.\n");
			break;
	}
	return 0;
}

int example7_14(void)
{
	int num1, num2, num3, max;
	printf("세 개의 다른 수를 입력하고 Enter를 누르세요:");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2) max = num1;
	else max = num2;
	if (num3 > max) max = num3;
	//else max = max;
	// max=(num1>num2) ? num1 : num2;
	// max=(num3>max) ? num3 : max; 
	printf("입력받은 수는 %d, %d, %d이고,\n", num1, num2, num3);
	printf("최댓값은 %d입니다.\n", max);
	return 0;
}

int example7_15(void)
{
	int num1, num2, num3, max, min;
	printf("세개의 다른 수를 입력하고 Enter를 누르세요:");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2) { max = num1; min = num2; }
	else { max = num2; min = num1; }
	if (num3 > max) max = num3;
	if (num3 < min) min = num3;
	printf("최댓값=%d, 최솟값=%d\n", max, min);
	return 0;
}

int example7_16(void)
{
	int score;
	printf("당신의 점수를 입력하고 Enter를 누르세요:");
	scanf("%d", &score);
	if (score < 60) printf("F\n");
	else if (score >= 60 && score < 65) printf("D\n");
	else if (score >= 65 && score < 70) printf("D+\n");
	else if (score >= 70 && score < 75) printf("C\n");
	else if (score >= 75 && score < 80) printf("C+\n");
	else if (score >= 80 && score < 85) printf("B\n");
	else if (score >= 85 && score < 90) printf("B+\n");
	else if (score >= 90 && score < 95) printf("A\n");
	else if (score >= 95 && score <= 100) printf("A+\n");
	else printf("입력이 올바르지 않습니다!\n");
	return 0;
}

int example7_17(void)
{
	int value;
	printf("1~3까지의 수를 입력하세요:");
	scanf("%d", &value);

	switch (value) {
		case 1:
			printf("1을 입력하셨습니다.\n");
			break;
		case 2:
			printf("2를 입력하셨습니다.\n");
			break;
		case 3:
			printf("3을 입력하셨습니다.\n");
			break;
		default:
			printf("다시 입력하세요.\n");
			break;
	}
	return 0;
}

int example7_18(void)
{
	int value;
	printf("1~3까지의 수를 입력하세요:");
	scanf("%d", &value);

	switch (value) {
		case 1:
			printf("1을 입력하셨습니다.\n");
		case 2:
			printf("2를 입력하셨습니다.\n");
		case 3:
			printf("3을 입력하셨습니다.\n");
		default:
			printf("다시 입력하세요.\n");
	}
	return 0;
}

int example7_19(void)
{
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
		case '*':
			printf("곱셈 결과는 %d입니다.\n", num1 * num2);
			break;
		case '/':
			printf("나눗셈 결과는 %.2f입니다.\n", (double)num1 / num2);
			break;
		default:
			printf("다시 입력하세요\n");
			break;
	}
	return 0;
}

int example7_20(void)
{
	for (int i = 0; i < 100; i++) {
		printf("홍길동\n");
	}

	for (int j = 0; j < 10; j++) {
		printf("Hello\n");
	}

	int n, sum = 0;

	for (n = 1; n <= 100; n++) sum = sum + n;
	printf("%d\n", sum);
	return 0;
}

int example7_21(void)
{
	for (int i = 0; i < 1000; i++) {
		printf("홍길동 %4d번째\n", i + 1);
	}
	return 0;
}