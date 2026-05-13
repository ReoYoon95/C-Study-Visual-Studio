#include <stdio.h>




int main(void) {

	return 0;
}

void example7_1(void){
	//for (;;) {//무한루프
	for (int i; i < 10; i++) {
		printf("Name"); 
	}
}

void example7_2(void) {
	for (int i; i < 10; i++) {
		printf("%04d : Name\n", i + 1);
	}
}