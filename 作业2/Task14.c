//3. ��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

//������	Sn = (a*1)+(a * 10 + a * 1) + (a * 100 + a * 10 + a * 1) + (a * 1000 + a * 100 + a * 10 + a * 1) + (a * 10000 + a * 1000 + a * 100 + a * 10 + a * 1);

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{	
	int  a, i, Sn = 0, num = 0;
	
	printf("������һ��������");
	scanf("%d", &a);

	for (i = 0; i < 5; i++)

	{
		num =num+ a* pow(10, i);
		Sn = Sn + num;
	
	}
	printf("%d \n", Sn);



	system("pause");
	return 0;
}
