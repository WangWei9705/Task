//1.����Ļ���������ͼ����
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	//��ӡ�ϰ벿��
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
			
	}


	//��ӡ�°벿��
	for (i = 1; i <= 6; i++)
	{
		for (j = 11; j >= (2 * i - 1); j--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
