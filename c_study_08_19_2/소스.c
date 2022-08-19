#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float div(float a, float b) { return a / b; }
int mod(int a, int b) { return a % b;}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 20;
	int b = 30;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %.2f\n", a, b, div((float)a, (float)b));
	printf("%d %% %d = %d\n", a, b, mod(a, b));

	swap(&a,&b);

	printf("%d  %d", a, b);

	return 0;
}