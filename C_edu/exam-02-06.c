#include <stdio.h>
#define LENGTH 10 //��ũ�� ���

int main_exam_02_06(void) {
	
	int number = 3;

	const int NUMBER = 5; //�ɺ��� ���
	number = 5;

	printf("%d\n", LENGTH);
	printf("%d\n", number);
	printf("%d\n", NUMBER);
	
	return 0;


}