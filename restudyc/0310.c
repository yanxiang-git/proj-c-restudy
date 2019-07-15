/*
如果输入的整数值为正。判断奇偶 显示
*/
#include <stdio.h>

int main(void) {
    int a;

    puts("输入整数: ");
    scanf("%d", &a);

    if (a > 0)
        if (a % 2)
            puts("输入的整数是奇数");
        else
            puts("输入的整数是偶数");

    else if (a == 0)
        puts("输入的整数是偶数");
    else
        puts("你输入的不是正数");

    return 0;
}