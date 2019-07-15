/*
输入的整数能被5整除吗
*/
#include <stdio.h>

int main(void) {
    int a;

    printf("输入整数: ");  scanf("%d", &a);

    if (a % 5)
        puts("不能被5整除");
        else
            puts("能被5整除");

            return 0;
}