#include <stdio.h>

int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2;

	printf("첫번째 숫자: %d\n", num1);
	printf("두번째 숫자: %d\n", num2);

	return 0;
}