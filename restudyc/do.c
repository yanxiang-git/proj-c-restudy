/*
不停的输入整数，显示其和和平均值
*/
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int cnt = 0;
	int retry;

	do{
		int no;

		printf("输入整数: "); scanf("%d",&no);

		sum = sum + no;
		cnt = cnt + 1;

		printf("是否继续？<yes ··· 0 / no ··· 9>: ");
		scanf("%d",&retry);

	} while ( retry == 0);

	printf("和为%d,\n平均值为%f。\n",sum,(double)sum / cnt );

	return 0;
}