//�ж�1000�굽2000��֮������꣨��ͨ���꣺�ܱ�4�������Ҳ��ܱ�100�������������꣺�ܱ�400������
//if�����ж����

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	scanf("%d",&i);    //&ȡ��ַ����
	//�ж�i�Ƿ��ܱ�4����
	if (i % 4 == 0)
	{
		//�ж�i�Ƿ��ܱ�100����
		if (i % 100 != 0)
	
		{
			printf("%d����ͨ���� \n", i);
		}
		//��������
		if (i % 400 == 0)
		{
			printf("%d����������", i);
		}
	}

	printf("%d��������", i);

	system("pause");
	return 0;
}