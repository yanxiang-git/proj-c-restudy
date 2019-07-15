/*
判断输入整数的符号
*/
#include <stdio.h>

int main(void)
{
	int a;

	puts("输入整数: ");
	scanf("%d",&a);

	if(a == 0)
		puts("输入的整数是0");
	else if(a > 0)
		puts("输入的整数是正数");
	else
		puts("输入的整数是负数");

	return 0;
}