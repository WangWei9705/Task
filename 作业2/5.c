//��10�������е������

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int MAX =0;
	int i =0;

	printf("������10��������");   //��ʾ����ʮ������
	for (i = 0; i <= 9; i++)
	{

		scanf("%d", &arr[i]);   //��������10����

	}

	MAX = arr[0];   //�ȼ����һ�������
	for (i = 1; i <= 9; i++)
	{

		if (arr[i] > MAX)
		{
			MAX = arr[i];  //ÿ�αȽϺ󣬽�������MAX
		}
	}

	printf("�����Ϊ��%d", MAX);

	system("pause");
	return 0;
}
