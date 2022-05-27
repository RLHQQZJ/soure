#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
	
}
#define MAX(X,Y)(X>Y?X:Y)
//e/*xtern int Add(int, int);*/
int main() 
{
	int a = 37;
	int b = 33;
	int max = MAX(a, b);
	printf("max=%d\n", max);
	max = Max(a, b);
	printf("max=%d\n", max);
	/*int sum = Add(a, b);*/
	/*printf("sum=%d\n", sum);*/
	/*extern int black;
	printf("%d\n", black);*/

	return 0;
}
