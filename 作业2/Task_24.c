#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//#define ROW 5
//
//int arr[ROW][ROW];
//	在屏幕上打印杨辉三角。
//	1
//	1 1
//	1 2 1
//	1 3 3 1
void yanghui(int n)
{
	int arr[100][100];
	int i; 
	int j;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
			arr[i][j] = 0;
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j || j == 0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i][j]!=0)
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
}
int main( )
{
	int n;

	printf("请问你想打印几行杨辉三角形：");
	scanf("%d", &n);

	yanghui(n);

	system("pause");
	return 0;
}
