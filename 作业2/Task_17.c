#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	 дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//	���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

int DigitSum(n)
{

	if (n > 0)
	{
		return n % 10 + DigitSum(n/10) ;
	}
	return 0;
}


int main()
{	
	int num;

	printf("������һ��������");
	scanf("%d", &num);

	printf("�����ֵ�������ֵĺ�Ϊ��%d \n",DigitSum(num));
	system("pause");
	return 0;
}
