/*
输入整数值，显示绝对值
*/
#include <stdio.h>

int main(void)
{
	int a;

	puts("输入整数: ");
	scanf("%d",&a);

	if(a >= 0)
		printf("绝对值是%d\n",a );
	else
		printf("绝对值是%d\n",-a );

	return 0;
}