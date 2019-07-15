/*
递增显示从0到输入的正整数的各个整数
*/
#include <stdio.h>

int main(void)
{
	int a;
	int i;
	i = 0;

	printf("输入整数: "); scanf("%d",&a);

	while(i <= a )
	{
		printf("%d ",i++);

	}
		printf("\n");

	return 0;
}