#include <stdio.h>

int main(){

	int age;
	float height;
	char blood;

	scanf_s("%d %f %c", &age, &height, &blood);

	printf("�ȳ��Ͻʴϱ�, �̴����Դϴ�.\n");
	printf("����: %d\n", age);
	printf("Ű: %.3f\n", height);
	printf("������: %c\n", blood);
	printf("�� ��Ź�帳�ϴ�\n");

}