#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int select()
{
	printf("\a\a\a\a");//"\a"为蜂鸣符号
	return 0;
}

int main()
{
	int input = 0;//注意，“= 0”此处是输入的值
	printf("你好！\n");
	printf("你是一个安静的人吗？（1/0）");
	scanf_s("%d\n", &input);//“&”为地址符，在C语言中的作用为取地址  
	if (input == 1)//不要在此处加上“;”！！！
	{
		printf("那你做事应该会很专注吧");
	}
	else/*此处对的输入另一结果时所触发的代码
		  若if行加上了“;”，则此处会报错说“没有匹配if的非法else”*/
	{
		printf("那你应该很活泼吧");
	}
	return 0;
}