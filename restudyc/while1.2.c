/*
输入的整数开始倒数到0
*/
#include <stdio.h>

int main(void) {
    int a;

    printf("输入整数: "); scanf("%d", &a);

    while (a >= 0) {
      
        printf("%d\n", a--);
        
    }
        printf("\n");

        printf("%d\n",a);
        
    return 0;
}
