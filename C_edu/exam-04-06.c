#include <stdio.h>
//scanf_s �Է��Լ�
int main_exam_04_06(void) {
	//
	//char character;
	//int inum;
	//float fnum;

	//printf("char �� �Է�: ");
	//scanf_s("%c", &character); // & = ���ۻ���

	//printf("int �� �Է�: ");
	//scanf_s("%d", &inum);

	//printf("float �� �Է�: ");
	//scanf_s("%f", &fnum);

	//printf("chracter ���� ���� : %c\n, int���� ���� : %d\n, float ���� ���� : %f\n", character, inum, fnum);
	//
	char name[255]; //�迭�� �Է¹����� & �Ⱥ���
	printf("\n �̸��� �����ΰ���?\n");
	scanf_s("%s", name, sizeof(name));
	printf("�ݰ����ϴ�!%s! \n", name);

	return 0;
}