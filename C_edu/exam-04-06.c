#include <stdio.h>
//scanf_s 입력함수
int main_exam_04_06(void) {
	//
	//char character;
	//int inum;
	//float fnum;

	//printf("char 값 입력: ");
	//scanf_s("%c", &character); // & = 앤퍼샌드

	//printf("int 값 입력: ");
	//scanf_s("%d", &inum);

	//printf("float 값 입력: ");
	//scanf_s("%f", &fnum);

	//printf("chracter 변수 값은 : %c\n, int변수 값은 : %d\n, float 변수 값은 : %f\n", character, inum, fnum);
	//
	char name[255]; //배열은 입력받을때 & 안붙임
	printf("\n 이름이 무엇인가요?\n");
	scanf_s("%s", name, sizeof(name));
	printf("반갑습니다!%s! \n", name);

	return 0;
}