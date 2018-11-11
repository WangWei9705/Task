//¼ÆËã1/1-1/2+1/3-...+1/99-1/100µÄÖµ
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;
	while (deno <= 100)
	{
		sign = -sign;
		term = sign / deno;
		sum = sum + term;
		deno = deno + 1;
	}
	
	printf("%f \n", sum);

	system("pause");
	return 0;
}
