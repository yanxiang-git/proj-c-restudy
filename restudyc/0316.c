/*
计算输入两个整数的较大值和较小值 并显示
*/
#include <stdio.h>

int main(void) {
    int a, b, max, min;

    puts("输入两个整数: ");
    printf("整数a:  "); scanf("%d", &a);
    printf("整数b:  "); scanf("%d", &b);

    if (a > b)
    {max = a; min = b;}
    else
    {max = b; min = a;}

    printf("较大值是%d。\n较小值是:%d\n", max, min );

    return 0;
}