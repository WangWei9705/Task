//�������������Լ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int a, b,i;

	printf("��������������");

	scanf("%d %d", &a, &b);

	if (a < b)

	{
		for (i = a; i > 0; i--)
		{
			if (b % i ==0 & a % i==0)
			{
				printf("���Լ��Ϊ��%d \n", i);
				break;
			}

		}
	}
	system("pause");
	return 0;
}
