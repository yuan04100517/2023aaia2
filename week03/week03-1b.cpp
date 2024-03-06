#include <stdio.h>
int main()
{
    printf("請輸入2個數字:");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%5d\n", a);
    printf("%5d\n", b);
    printf("---------\n");
    printf("%5d\n", a+b);

}
