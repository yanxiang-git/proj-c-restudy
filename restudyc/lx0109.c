/*
显示读取到3ge 整数的he
*/
#include <stdio.h>

int main(void)
{
	int a,b,c;
	int q ;

	puts("输入3个整数。 ");
	printf("整数1: "); scanf("%d",&a);
	printf("整数2: "); scanf("%d",&b);
	printf("整数3: "); scanf("%d",&c);
	
	q = a + b + c;

	printf("输入的3个整数的和是%d。\n", q );


	return 0;
}