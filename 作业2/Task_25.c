#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//	��д������
//	unsigned int reverse_bit(unsigned int value);
//	��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//	�磺
//	��32λ������25���ֵ�������и�λ��
//	00000000000000000000000000011001
//	��ת�󣺣�2550136832��
//	10011000000000000000000000000000
//	���������أ�2550136832 


unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int ret = 0;
	for (i = 0; i < 32; i++)
	{
		ret += ((value >> i) & 1) << (31 - i);
		//������ĵ�iλ����(31-i)λ�����ƺ�Ľ�����а�λ�����㼴�ɵõ����ս����
	}
	return ret;
}


int main()
{	
	unsigned int num=0;

	printf("������һ��������");
	scanf("%d", &num);

	printf("�����ִ����ҷ�ת���ֵΪ��%u \n", reverse_bit(num));

	system("pause");
	return 0;
}
