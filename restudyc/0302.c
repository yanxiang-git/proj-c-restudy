/*
输入的是奇数吗
*/
#include <stdio.h>

int main(void)
{
	int a;

	puts("输入整数: "); scanf("%d",&a);

	if(a % 2)
		puts("输入的是奇数");


	return 0;
}