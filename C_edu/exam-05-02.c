#include <stdio.h>

int main_exam_05_02(void) {

	int num1 = 3, num2 = 4;

	//복합 대입 연산자
	num1 += 3; //num1 = num1 + 3;
	num2 *= 4; //num2 = num2 * 4;

	printf("num1 연산 이후 값%d\n", num1);
	printf("num2 연산 이후 값%d\n", num2);

	return 0;
}