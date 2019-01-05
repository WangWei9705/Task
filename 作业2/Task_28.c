#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//	有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//	student a am i
//	i ma a tneduts
//	i am a student


// 由于不能使用库函数，所以需要先写一个函数来求字符串的长度
int mystrlen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

void reverse(char *left, char *right)
{
	
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

void reverse_str(char *str, int sz)
{
	
	char *str1 = str;
	char *left = str;
	char *right = str + sz - 1;
	reverse(left, right);         //	先将字符串整体反转
	while (*str1)
	{
		left = str1;
		while ((*str1 != '\0') && (*str1 != ' ')) //	找到单词，此处一定要加(*str1 != '\0')条件限制，
			//	因为找到最后一个单词的时候，*str1永远也不为空格
		{
			str1++;
		}
		right = str1 - 1;               //		此时str1指向单词后方的空格，需要减一方能指向单词的最后一个字母
		reverse(left, right);               //	继整体反转后再次反转单词，能使单词拼写顺序恢复过来
		if (*str1 == ' ')             //	等于空格让指针后移一位否则不能参与下次循环。
		{
			str1++;
		}
	}
}

int main()
{
	char arr[ ] = "student a am i";
	int sz = mystrlen(arr);
	
	printf("移动完成后为：");
	reverse_str(arr, sz);
	printf("%s\n", arr);
	


	system("pause");
	return 0;
}
