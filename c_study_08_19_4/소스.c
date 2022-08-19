#include<stdio.h>



// main 함수 == 진입점함수(entry point)
// 명령행 인자
int main(int argc, char** argv)
{
	for (int i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return 0;
}