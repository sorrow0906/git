#include <stdio.h>

int main(void) {

	char name[10];
	char department[20];
	char grade[10];

	printf("�̸��� �Է����ּ���: ");
	scanf("%s", &name);
	printf("�����а��� �Է����ּ���: ");
	scanf("%s", &department);
	printf("�г��� �Է����ּ���: ");
	scanf("%s", &grade);
	printf("%-8s %14s %10s \n", "�� ��", "�����а�", "�г�");
	printf("%-8s %14s %10s \n", name, department, grade);


	return 0;

}