#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)
{
	
	return x + y;
}
int main()
{
	int(*p)(int x, int y) = add;
	printf("%d\n",(*p)(2,3));
	return 0;

}
