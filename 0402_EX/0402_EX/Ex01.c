#include <stdio.h>

int main(){

	int age;
	float height;
	char blood;

	scanf_s("%d %f %c", &age, &height, &blood);

	printf("안녕하십니까, 이다혜입니다.\n");
	printf("나이: %d\n", age);
	printf("키: %.3f\n", height);
	printf("혈액형: %c\n", blood);
	printf("잘 부탁드립니다\n");

}