#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[20];
	printf("sizeof arr��%d\n", sizeof arr);/*�����⣺arr��20��Ԫ��,һ��Ԫ�ض�Ӧ4���ֽ�,
	��sizeof��λ��Ϊ�ֽ�,��˴�ӡ���Ϊ80*/

	int a = 0;
	printf("��λȡ����%d\n",~a);
	return 0;
}