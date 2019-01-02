#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//	编写函数：
//	unsigned int reverse_bit(unsigned int value);
//	这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//	如：
//	在32位机器上25这个值包含下列各位：
//	00000000000000000000000000011001
//	翻转后：（2550136832）
//	10011000000000000000000000000000
//	程序结果返回：2550136832 


unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int ret = 0;
	for (i = 0; i < 32; i++)
	{
		ret += ((value >> i) & 1) << (31 - i);
		//将提出的第i位左移(31-i)位将左移后的结果进行按位或运算即可得到最终结果。
	}
	return ret;
}


int main()
{	
	unsigned int num=0;

	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("该数字从左到右反转后的值为：%u \n", reverse_bit(num));

	system("pause");
	return 0;
}
