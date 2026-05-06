#include <stdio.h>

int example7_1(void);
int example7_2(void);
int example7_3(void);
int example7_4(void);
int example7_5(void);


int main(void) {
	printf(example7_1);
	printf(example7_2);
	printf(example7_3);
	printf(example7_4);
	printf(example7_5);

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