#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//	编程实现：
//	一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//	请找出这个数字。（使用位运算）

// 使用按位异或


int main()
{	
	int arr[11] = { 1, 1, 2, 3, 3, 4, 4, 5, 5, 6,6 };
	int i = 0;
	printf("待查找数据为：");
	for (i = 0; i < 11; i++)
	{
		
		printf("%d ", arr[i]);
	}
	printf("\n");
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < len; i++)
	{
		arr[0] = arr[0] ^ arr[i];           // 将arr[0]与arr[i]进行异或操作，若两数不同则将值赋给arr[0]

	}
	printf("只出现一次的数字为：%d \n", arr[0]);
	system("pause");
	return 0;
}
