/*
个位数是5吗
*/
#include <stdio.h>

int main(void) {
    int a;

    puts("输入整数: "); scanf("%d", &a);

    if ((a % 10) == 5 )
        puts("个位是5");
    else
        puts("个位不是5");

    return 0;
}