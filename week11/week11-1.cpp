#include <stdio.h>
int func(int n) {
    if(n==1) return 1;
    return n * func(n-1);
}
int main()
{
    printf("請輸入1個數字:");
    int n;
    scanf("%d", &n);
    int ans = func(n);
    printf("答案是:%d", ans);

}
