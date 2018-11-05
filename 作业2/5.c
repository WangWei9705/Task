//求10个整数中的最大数

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int MAX =0;
	int i =0;

	printf("请输入10个整数：");   //提示输入十个整数
	for (i = 0; i <= 9; i++)
	{

		scanf("%d", &arr[i]);   //键盘输入10个数

	}

	MAX = arr[0];   //先假设第一个数最大
	for (i = 1; i <= 9; i++)
	{

		if (arr[i] > MAX)
		{
			MAX = arr[i];  //每次比较后，将大数给MAX
		}
	}

	printf("最大数为：%d", MAX);

	system("pause");
	return 0;
}
