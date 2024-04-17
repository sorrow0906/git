#include <stdio.h>

int main(void) {
	//int result;
	//int num1, num2, num3;

	//printf("세 개의 정수 입력: \n");
	//scanf("%d %d %d", &num1, &num2, &num3);

	//result = (num1*num2)+num3;
	//printf("%d x %d + %d = %d\n", num1, num2, num3, result);

	//int result;
	//int num;

	//printf("정수 입력: ");
	//scanf("%d", &num);

	//result = (num*num);
	//printf("%d^2 = %d\n", num, result);

	//int divisionQ;
	//int divisionR;
	//int num1, num2;

	//printf("두 개의 정수 입력: ");
	//scanf("%d %d", &num1, &num2);

	//divisionQ = num1 / num2;
	//divisionR = num1 - (num2 * divisionQ);
	//printf("%d / %d의 몫: %d\n", num1, num2, divisionQ);
	//printf("%d / %d의 나머지: %d\n", num1, num2, divisionR);

	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("몫: %d, 나머지: %d\n", num1 / num2, num1 % num2);


	return 0;
}