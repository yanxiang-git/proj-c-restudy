/*
输入的值是否为0
*/
#include <stdio.h>

int main(void)
{
	int a;

	puts("输入整数: ");
	scanf("%d",&a);

	if(a == 0)
		puts("输入的是0");
	else
		puts("输入的不是0");

	return 0;
}