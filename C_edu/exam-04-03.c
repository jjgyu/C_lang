#include <stdio.h>

int main_exam_04_03(void) {
	char character = 'X';
	int inumber = 92;
	double dnumber = 20.201;

	printf("%c\n", character);
	printf("%d\n", character);
	printf("%d\n", inumber);
	printf("%f\n", dnumber);

	int incVal = 30;
	// %
	printf("햄버가 가격이 %d% 증가\n", incVal);
	printf("햄버가 가격이 %d%% 증가\n", incVal);

	return 0;


}