//��1��100�г����˶��ٴ�9��
//��λ��i % 10 = 9; ʮλ��i / 10 = 9
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	//��λ9�ĸ���
	for (i = 1; i < 100; i++)
	{
		if(i % 10 == 9)
		count++;
		
	}
	//ʮλ9�ĸ���
	for (i = 1; i < 100; i++)
	{
		if(i / 10 == 9)
		count++;
	}

	printf("%d \n", count);

	system("pause");
	return 0;
}
