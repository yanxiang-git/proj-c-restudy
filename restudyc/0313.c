/*
计算输入的三个整数的最大值 显示出来
*/
#include <stdio.h>

int main(void)
{
	int a,b,c,max;

	puts("输入三个整数:  ");
	printf("整数a: \n"); scanf("%d",&a);
	printf("整数b: \n"); scanf("%d",&b);
	printf("整数c: \n"); scanf("%d",&c);

	//scanf("%d%d%d",&a,&b,&c);

	max = a;

	if(b > max) max = b ;
	if(c > max) max = c ;

	printf("最大值是%d。\n",max );	
 

	return 0;
}