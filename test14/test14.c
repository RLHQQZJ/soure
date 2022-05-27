#define _CRT_SECURE_NO_WARNINGS 1
struct book {
	char name[10];
	int price;
};
#include<stdio.h>
int main() {
	struct book b1 = { "C语言设计",55 };
		/*printf("书名：%s\n", b1.name);
	printf("%d\n", b1.price);*/
	struct book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);*/
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", sizeof(&a));
//	return 0;
//}