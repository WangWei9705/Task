#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	���ʵ�֣�
//	һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//	���ҳ�������֡���ʹ��λ���㣩

// ʹ�ð�λ���


int main()
{	
	int arr[11] = { 1, 1, 2, 3, 3, 4, 4, 5, 5, 6,6 };
	int i = 0;
	printf("����������Ϊ��");
	for (i = 0; i < 11; i++)
	{
		
		printf("%d ", arr[i]);
	}
	printf("\n");
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < len; i++)
	{
		arr[0] = arr[0] ^ arr[i];           // ��arr[0]��arr[i]��������������������ͬ��ֵ����arr[0]

	}
	printf("ֻ����һ�ε�����Ϊ��%d \n", arr[0]);
	system("pause");
	return 0;
}
