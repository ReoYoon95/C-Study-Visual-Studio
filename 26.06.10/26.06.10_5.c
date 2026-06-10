#include <stdio.h>

struct Man {
	int age;	 //-> 구조체안에 들어가는 것을 멤버라 함.
	double weight; // 멤버 변수.

};//구조체는 끝날때 세미코론 필 수.

int main(void) {


	struct Man han;
	struct Man han1 = { 2, 7.5 };
	//han = 10; 이건 에러남.
	han.age = 1;
	han.weight = 3.5;
	printf("age : %d, weight : %f\n", han.age, han.weight);
	han = han1; //구조체 복사!! 이부분 중요!
	printf("age : %d, weight : %f\n", han.age, han.weight);
	printf("age : %d, weight : %f\n", han1.age, han1.weight);
	return 0;
}