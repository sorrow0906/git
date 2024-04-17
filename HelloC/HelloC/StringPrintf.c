#include <stdio.h>

int main(void) {

	char name[10];
	char department[20];
	char grade[10];

	printf("이름을 입력해주세요: ");
	scanf("%s", &name);
	printf("전공학과를 입력해주세요: ");
	scanf("%s", &department);
	printf("학년을 입력해주세요: ");
	scanf("%s", &grade);
	printf("%-8s %14s %10s \n", "이 름", "전공학과", "학년");
	printf("%-8s %14s %10s \n", name, department, grade);


	return 0;

}