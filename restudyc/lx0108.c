/*
显示读取到两个整数的乘积
*/
#include <stdio.h>

int main(void)
{
	int a,b;
	int q ;

	puts("输入两个整数。 ");
	printf("整数1: "); scanf("%d",&a);
	printf("整数2: "); scanf("%d",&b);
	q = a * b;

	printf("输入的两个整数的乘积是%d。\n", q );


	return 0;
}