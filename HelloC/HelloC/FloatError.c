#include <stdio.h>

int main(void) {

	float num = 0.0;

	for (int i = 0; i < 100; i++) {
		num += 0.1;
	}
	printf("0.1을 100번 더한 결과: %f\n", num);
	return 0;
}