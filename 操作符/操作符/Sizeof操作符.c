#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[20];
	printf("sizeof arr：%d\n", sizeof arr);/*笔试题：arr中20个元素,一个元素对应4个字节,
	而sizeof单位则为字节,因此打印结果为80*/

	int a = 0;
	printf("按位取反：%d\n",~a);
	return 0;
}