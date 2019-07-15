/*
输入的整数是奇数还是偶数
*/
#include <stdio.h>

int main(void)
{
	int retry;

	do{
		int a;

		puts("输入整数: ");
	 	scanf("%d",&a);

	 	if(a % 2)
	 		puts("输入整数是奇数");
	 	else
	 		puts("输入整数是偶数");

	 	printf("要重复一次吗?\n  [Yes···0 / No··· 9] :");
	 	scanf("%d",&retry);

	} while( retry == 0);




	return 0;
}
