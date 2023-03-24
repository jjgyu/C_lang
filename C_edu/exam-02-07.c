#include <stdio.h>

//자동 형변환
int main_exam_02_07(void) {

	double number1 = 10;
	int number2 = 1.234; 
	short number3 = 70000; 

	printf("%f\n", number1); //실수형 10.000000
	printf("%d\n", number2); // 정수형 -> 소숫점 표기x
	printf("%d\n", number3); //오버플로

	return 0;
}