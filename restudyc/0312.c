/*
显示输出的两个整数中较大的值
*/
#include <stdio.h>

int main(void)
{
	int a,b,max;

	puts("输入两个整数: ");
	scanf("%d%d",&a,&b);

	// if(a > b)
	// 	printf("较大的值是%d\n", a);
	// else if (a < b)		
	// 	printf("较大的值是%d\n", b);
	// else 
	// 	puts("相等");

	if(a > b) max = a;
	else max = b;

	printf("较大的值是%d。\n",max );

	return 0;
}
