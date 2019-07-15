/*
输入两个整数是否相等. ==  !=两种方法
*/
#include <stdio.h>

int main(void) {
    int a, b;

    puts("输入两个整数: "); scanf("%d%d", &a, &b);

    // if (a == b)
    //     puts("它们相等");
    // else
    //     puts("它们bu相等");


    if (a != b)
        puts("它们bu相等");
    else
        puts("它们相等");



    return 0;
}