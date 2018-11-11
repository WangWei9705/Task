//将数组A中的内容与B中的内容进行交换
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int A[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int B[10] = { 0,9,8,5,6,12,3,56,5,2 };
	int i=0;
	
	//开始交换a，b
	for (i = 0; i < sizeof A / sizeof (A[0]); i++)
	{
		A[i] = A[i] ^ B[i];
		B[i] = A[i] ^ B[i];
		A[i] = A[i] ^ B[i];
		
	}
	for(i = 0; i < sizeof(A) / sizeof(A[0]); i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
