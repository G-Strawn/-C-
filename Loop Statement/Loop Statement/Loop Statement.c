#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	while (a < 78)//���ﲻҪ�ӡ�;�� ���ﲻҪ�ӡ�;�� ���ﲻҪ�ӡ�;�� ���ﲻҪ�ӡ�;�� 
	{
		printf("%d\n", a);
		a++;
	}
	if (a == 78)
	{
		printf("%d\n--�������", a);
	}
	return 0;
}
//��Ϊ��������ʧ�ܵ�м����
//int main()
//{
//	int a = 0;
//	//int b = 0;
//	//scanf_s("%d%d", a, b);
//	//int sum = a + b;
//	while (a < 100)
//	{
//		printf("�ۼ��У�%d\n", a);
//		a++;
//	}
//	if (a == 100)
//	{
//		printf("���������%d", a);
//	}
//	return 0;
//}