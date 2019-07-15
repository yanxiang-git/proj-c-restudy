/*
读取一个整数并且显示其五倍整数
*/
#include <stdio.h>

int main(void)
{
	int no;

	printf("输入整数: ");
	scanf("%d",&no);

	printf("他的五倍整数是:%d。\n", no * 5 );

	return 0 ;

}