//��ӡ100����200֮���������ֻ�ܱ�1��������������
//����֪ʶ��forѭ��,break����ѭ��;������i%j)
//����һ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//i��2��i-1֮������������������
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			//
			
	
		}

		if (j == i)
		{
			printf("%d \n", i);
		}

	}
	system("pause");
	return 0;
}

//��������ֻ��������
//��������������sqrt)