#include <stdio.h>

//�ڵ� ����ȯ
int main_exam_02_07(void) {

	double number1 = 10;
	int number2 = 1.234; 
	short number3 = 70000; 

	printf("%f\n", number1); //�Ǽ��� 10.000000
	printf("%d\n", number2); // ������ -> �Ҽ��� ǥ��x
	printf("%d\n", number3); //�����÷�

	return 0;
}