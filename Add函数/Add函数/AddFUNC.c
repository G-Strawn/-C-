#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

Add(num1, num2)//����Add����ȥ�����������
{
	int sum = num1 + num2;
}
int main()
{
	int a = 0;//0Ϊ����ֵ
	int b = 0;//0Ϊ����ֵ
	scanf_s("%d%d",&a,&b);/*��һ�β���Ҫ�ӡ�\n������Ȼ��������������ܱ�Ť��
	               ��Ȼ������ֵ����ô�϶�Ҫ�����룬ʹ��scanf��������ΪΪ����a ����b���ж���*/
	int sum = a + b;
	printf("%d\n",sum);//
	return 0;
}