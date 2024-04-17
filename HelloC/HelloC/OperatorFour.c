#include <stdio.h>

int main(void) {
	int num1 = 12;
	int num2 = 12;

	printf("첫번째 숫자: %d\n", num1);
	printf("첫번째 숫자++: %d\n", num1++);
	printf("첫번째 숫자: %d\n\n", num1);	//후위증가

	printf("두번째 숫자: %d\n", num2);
	printf("++두번째 숫자: %d\n", ++num2);
	printf("두번째 숫자: %d\n\n", num2);	//후위증가

	return 0;
}