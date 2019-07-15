/*
输入的整数是奇数还是偶数
*/
#include <stdio.h>

int main(void)
{
	int a;

	printf("输入一个整数: "); scanf("%d",&a);

	if(a %2)
		puts("是奇数");
	else
		puts("是偶数");

	return 0;
}