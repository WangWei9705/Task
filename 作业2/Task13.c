//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//
//
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int num, a, b, c;

	printf("0~999的水仙花数为：");

	for (num =100 ; num <= 999; num++)
	{
		a= num / 100;                    //百位数
		b = (num -a* 100) / 10;     //十位数
		c  = num % 10;                //个位数
		if (num ==a*a*a+b*b*b+c*c*c)               ///判断num是否各位数的立方和
		{
			printf("%d ", num);
		}

	}

	printf("\n");

	system("pause");
	return 0;
}
