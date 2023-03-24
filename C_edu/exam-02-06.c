#include <stdio.h>
#define LENGTH 10 //매크로 상수

int main_exam_02_06(void) {
	
	int number = 3;

	const int NUMBER = 5; //심볼릭 상수
	number = 5;

	printf("%d\n", LENGTH);
	printf("%d\n", number);
	printf("%d\n", NUMBER);
	
	return 0;


}