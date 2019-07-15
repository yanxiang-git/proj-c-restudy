/*
计算输入四个整数中的最大值 并显示
*/
#include <stdio.h>

int main(void)
{	
	int a,b,c,d,max;

	puts("输入四个整数: ");
	printf("整数a: "); scanf("%d",&a);
	printf("整数b: "); scanf("%d",&b);
	printf("整数c: "); scanf("%d",&c);
	printf("整数d: "); scanf("%d",&d);
 	
 	max = a;
 	if(b > max) max = b;
 	if(c > max) max = c;
 	if(d > max) max = d;

 	printf("最大值是:%d。\n",max );

	return 0;
}