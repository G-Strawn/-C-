#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int e = 0;
	int f = 1;
	int g = e || f;
	printf("%d\n", g);//��||��Ϊ�߼���  ��  ��&&��Ϊ�߼���
	return 0;
}
int select()
{
	int a = 0;
	int b = 4;
	int c = 6;
	int d = (a = b + 2, c = a - 4, b = c + 2);//���������μ��㣡�������ʽ��ֵ�����һ�����ʽ�Ľ��
	printf("%d\n", d);
	return 0;
}
