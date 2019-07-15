/*
如果后者是前者的约数 显示“b是a的约数“ 否则显示”b不是a的约数“
*/
#include <stdio.h>

int main(void)
{
	int a, b;

	puts("输入两个整数: ");
	printf("整数a: "); scanf("%d",&a);
	printf("整数b: "); scanf("%d",&b);

	if(a % b)
		puts("b不是a的约数");
	else
		puts("b是a的约数");


	return 0;
}