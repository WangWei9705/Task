//���������ִӴ�С���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//�������a,b,c,MAX
	int a, b, c, MAX;

	//��ʾ��Ϣ
	printf("�������������֣�");

	//���̶�ȡ ����
	scanf("%d %d %d", &a, &b, &c);

	//�Ƚ��жϣ�����a,b��ֵ
	if (a > b)
	{
		MAX = a,a=b,b=MAX;
	}

	//�Ƚ��жϣ�����b,cֵ
	if (b > c)
	{
		MAX = b, b = c, c = MAX;
	}
	//�Ƚ��жϣ�����c,aֵ
	if (c > a)
	{
		MAX = c, c = a, a = MAX;
	}

	//��a,b,c�Ӵ�С���
	printf("�Ӵ�С����Ϊ��%d %d %d  \n",a,b,c);

	system("pause");
	return 0;
}
