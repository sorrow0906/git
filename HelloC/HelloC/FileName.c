#include <stdio.h>


int main() {
	
	int myint1;
	int myint2;

	int count;

	float myfloat;
	double mydouble;
	char str[] = "�ܹ���\n���\n����\n";


	myint1 = 4;
	myint2 = 15;

	count = myint2 - myint1;

	myfloat = 1.123456789;
	mydouble = 2.4;


	printf("���� %d���� ����� ������ �ֽ��ϴ�\n", myint1);
	printf("���� %d���� å�� ������ �ֽ��ϴ�\n", count);
	printf("%d\n", myint2);
	printf("%f\n", myfloat);
	printf("%lf\n", mydouble);
	printf("%.3lf\n", myfloat);
	printf("%g\n", mydouble);
;	printf("%s", str);
}