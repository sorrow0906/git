#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int minMulti(int num1, int num2) {
	

}

int maxMulti(int num1, int num2) {
	int arr1[10001];
	int arr2[10001];

	int count1 = 0;
	int count2 = 0;

	for (int i = 2; i <= num1; i++) {
		if (num1 % i == 0) {
			arr1[count1] = i;
			count1++;
		}
	}

	for (int i = 2; i <= num2; i++) {
		if (num2 % i == 0) {
			arr2[count2] = i;
			count2++;
		}
	}

	for (int i = 0; i < count1; i++) {
		for (int j = 0; j < count2; j++) {

		}
	}
	
}

int main(){
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d\n", maxDivi(a, b));
	printf("%d", minMulti(a, b));

	return 0;
}