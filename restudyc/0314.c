/*
输入两个整数中较大的值
*/
#include <stdio.h>

int main(void) {
    int a, b, max;

    puts("输入两个整数: ");
    printf("整a: "); scanf("%d", &a);
    printf("整b: "); scanf("%d", &b);

    max = (a > b) ? a : b;
    
    printf("最大值是%d。\n", max );

    return 0;
}