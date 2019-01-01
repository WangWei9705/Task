#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//	日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//	嫌疑犯的一个。以下为4个嫌疑犯的供词。
//	A说：不是我。  
//	B说：是C。         
//	C说：是D。        
//	D说：C在胡说     
//	已知3个人说了真话，1个人说的是假话。
//	现在请根据这些信息，写一个程序来确定到底谁是凶手。


int main()
{
	int killer;

	//利用ASIC码遍历四人
	for (killer = 'A'; killer <= 'D'; killer++)
	{

		//	判断条件：三人中只有说假话
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
			printf("killer is %c \n",killer);
	}
		

	system("pause");
	return 0;
}
