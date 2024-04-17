#include <stdio.h>


int main() {
	
	int myint1;
	int myint2;

	int count;

	float myfloat;
	double mydouble;
	char str[] = "햄버거\n사람\n나비\n";


	myint1 = 4;
	myint2 = 15;

	count = myint2 - myint1;

	myfloat = 1.123456789;
	mydouble = 2.4;


	printf("나는 %d개의 우산을 가지고 있습니다\n", myint1);
	printf("나는 %d개의 책을 가지고 있습니다\n", count);
	printf("%d\n", myint2);
	printf("%f\n", myfloat);
	printf("%lf\n", mydouble);
	printf("%.3lf\n", myfloat);
	printf("%g\n", mydouble);
;	printf("%s", str);
}