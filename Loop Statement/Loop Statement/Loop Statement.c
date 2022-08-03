#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	while (a < 78)//这里不要加“;” 这里不要加“;” 这里不要加“;” 这里不要加“;” 
	{
		printf("%d\n", a);
		a++;
	}
	if (a == 78)
	{
		printf("%d\n--运算结束", a);
	}
	return 0;
}
//下为自主创新失败的屑代码
//int main()
//{
//	int a = 0;
//	//int b = 0;
//	//scanf_s("%d%d", a, b);
//	//int sum = a + b;
//	while (a < 100)
//	{
//		printf("累加中：%d\n", a);
//		a++;
//	}
//	if (a == 100)
//	{
//		printf("运算结束：%d", a);
//	}
//	return 0;
//}