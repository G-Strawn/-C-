#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int select()
{
	printf("\a\a\a\a");//"\a"Ϊ��������
	return 0;
}

int main()
{
	int input = 0;//ע�⣬��= 0���˴��������ֵ
	printf("��ã�\n");
	printf("����һ�����������𣿣�1/0��");
	scanf_s("%d\n", &input);//��&��Ϊ��ַ������C�����е�����Ϊȡ��ַ  
	if (input == 1)//��Ҫ�ڴ˴����ϡ�;��������
	{
		printf("��������Ӧ�û��רע��");
	}
	else/*�˴��Ե�������һ���ʱ�������Ĵ���
		  ��if�м����ˡ�;������˴��ᱨ��˵��û��ƥ��if�ķǷ�else��*/
	{
		printf("����Ӧ�úܻ��ð�");
	}
	return 0;
}