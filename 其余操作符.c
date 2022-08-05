#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int e = 0;
	int f = 1;
	int g = e || f;
	printf("%d\n", g);//“||”为逻辑或  、  “&&”为逻辑与
	return 0;
}
int select()
{
	int a = 0;
	int b = 4;
	int c = 6;
	int d = (a = b + 2, c = a - 4, b = c + 2);//从左到右依次计算！整个表达式的值是最后一个表达式的结果
	printf("%d\n", d);
	return 0;
}
