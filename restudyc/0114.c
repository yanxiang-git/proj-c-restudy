/*
显示读取到的两个整数的和
*/
#include <stdio.h>

int main(void) {
    int n1, n2, wawa;
    wawa = n1 + n2 ;
    puts("输入两个整数。");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);

    printf("两个整数的和是%d。\n", n1 + n2 );


    return 0;
}