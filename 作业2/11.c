//��ӡ����
//�ϰ벿�֣�
//(i = 1; i <= line; i++)  
//����line = 7
//��i��Ԫ������2*i - 1
//��i�пո�����line - i
//�°벿�֣�
//��i��Ԫ������2*(line - i) - 1
//��i�пո�����i
//(i = 1; i<line; i++)

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int j = 0;
	int line = 0;

	printf("��������Ҫ��ӡ������");
	scanf("%d", &line);
	//�ϰ벿��
	for (i = 1; i <= line; i++)
	{
		//��ʼ��ӡ�ո�
		for (j = 1; j <= (line - i); j++)
		{
			printf(" ");
		}
		//��ʼ��ӡ*
		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�°벿��
	for (i = 1; i < line; i++)
	{
		// ��ʼ��ӡ�ո�
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		//��ʼ��ӡ*
		for (j = 1; j <= (2 * (line - i) - 1); j++)
		{
			printf("*");
		}
		printf("\n");

	}
	system("pause");
	return 0;
}
