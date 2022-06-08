#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2,4,5,6 };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
#include<stdio.h>
int  comp(const void* p1,const void* p2)
{
	return *(int*)p1 -*(int*)p2;
}
int main()
{
	int arr[] = { 3,6,4,2,7,9,1,5,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), comp);
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
		
	}
	return 0;
}