#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

Add(num1, num2)//利用Add函数去解决计算问题
{
	int sum = num1 + num2;
}
int main()
{
	int a = 0;//0为输入值
	int b = 0;//0为输入值
	scanf_s("%d%d",&a,&b);/*这一段不需要加“\n”，不然代码运行起来会很别扭。
	               既然有输入值，那么肯定要有输入，使用scanf函数来人为为变量a 变量b进行定义*/
	int sum = a + b;
	printf("%d\n",sum);//
	return 0;
}