/*
输入两个整数的 差 显示出来
*/
#include <stdio.h>

int main(void)
{
	int a,b,cha;

	puts("输入两个整数: ");
	printf("整数a:  "); scanf("%d",&a);
	printf("整数b:  "); scanf("%d",&b);

	cha = (a > b) ? (a - b) : (b - a);
   	
	printf("它们的差是:%d。\n",cha );
	
	return 0;
}