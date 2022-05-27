#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test() {
	static int a = 1;
	a++;
	printf("a=%d\n", a);
}

int main() {

	int i = 0;
	while (i<6)
	{
		test();
			i++;
	}

	//int a = 12;
	/////int b = ++a;
	////int b = a
	////int b = a--
	//int b = --a;
	//printf("a=%d b=%d\n", a, b);
	/*int a = 3;
	int b = 0;
	int c = a ||b;
	printf("%d\n", c);*/
	return 0;
}
