#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	int j = 0;
	for (i = 0; i < line; i++)
	{
		for (j= 0; j< line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	for (i = 0; i < line - 1; i++)
	{
		for (j = 0; j<=i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}