#include<stdio.h>

struct tagRet {
	int addret;
	int subret;
	int mulret;
	float divret;
};

typedef struct tagRet Ret;

Ret multiCal(int a, int b) {
	Ret temp;

	temp.addret = a + b;
	temp.subret = a - b;
	temp.mulret = a * b;
	temp.divret = a / (float)b;

	return temp;
}

int main()
{
	int a = 20;
	int b = 30;

	Ret ret = multiCal(a, b);

	printf("%d + %d = %d\n", a, b, ret.addret);
	printf("%d - %d = %d\n", a, b, ret.subret);
	printf("%d * %d = %d\n", a, b, ret.mulret);
	printf("%d / %d = %f\n", a, b, ret.divret);

	return 0;
}