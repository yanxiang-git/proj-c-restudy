/*
输入三个整数，如果三个数都相等，则显示“三个值都相等”。
如果其中任意两个值相等，则显示“有两个值相等”。如果上述两种情况都不满足，则显示“三个值各不相同”。
*/
#include <stdio.h>

int main(void)
{
	int a,b,c;

	puts("输入三个整数: ");
	printf("整数a: "); scanf("%d",&a);
	printf("整数b: "); scanf("%d",&b);
	printf("整数c: "); scanf("%d",&c);

	if(a == b && b== c )
		puts("三个值都相等");
	else if (a != b && b != c && a != c)
		puts("三个值都不相等");
	else
		puts("有两个值相等");

	return 0;
}