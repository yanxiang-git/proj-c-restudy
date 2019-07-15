/*
读取一个整数 显示整数加 12 的结果
*/
#include <stdio.h>

int main(void)
{
	int no;

	printf("输入整数: ");
	scanf("%d",&no);

	printf("输入的整数加上12的结果是:%d。\n", no + 12);

	return 0;
}