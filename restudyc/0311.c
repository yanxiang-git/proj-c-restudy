/*
显示输出的两个整数中较大的值
*/
#include <stdio.h>

int main(void)
{
	int a,b;

	puts("输入两个整数: ");
	scanf("%d%d",&a,&b);

	if(a > b)
		printf("较大的值是%d\n", a);
	else if (a < b)		
		printf("较大的值是%d\n", b);
	else 
		puts("相等");

	return 0;
}
