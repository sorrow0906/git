#include <stdio.h>

int main(void) {
	int num1 = 12;
	int num2 = 12;

	printf("ù��° ����: %d\n", num1);
	printf("ù��° ����++: %d\n", num1++);
	printf("ù��° ����: %d\n\n", num1);	//��������

	printf("�ι�° ����: %d\n", num2);
	printf("++�ι�° ����: %d\n", ++num2);
	printf("�ι�° ����: %d\n\n", num2);	//��������

	return 0;
}