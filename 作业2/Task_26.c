#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

int average(int x, int y)
{
	int ret;
	ret = (x - y) / 2 + y;            // ��ļ�ȥС�ļ���С��
	return ret;
}
int main()
{	
	int a;
	int b;

	printf("��������������(�ÿո��������");
	scanf("%d %d",&a,&b);

	printf("����������ƽ����Ϊ��%d \n", average(a, b));

	system("pause");
	return 0;
}
