/*
编写一段程序输入两个整数，
如果它们的差值小于等于10,则显示“它们的差小于等于10”。
否则，显示“它们的差大于等于11”
*/
#include <stdio.h>

int main(void)
{
	int a,b,c;

	puts("输入两个整数: ");
	printf("整数a: "); scanf("%d",&a);
	printf("整数b: "); scanf("%d",&b);

	
	if(-10 <= (a - b) && (a - b) <= 10)
		puts("如果它们的差值小于等于10");
	  else
	  	puts("如果它们的差值大于等于11");
	

	return 0;
}