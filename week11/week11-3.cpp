#include <stdio.h>
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b, a%b);
}
int main()
{
    printf("請輸入2個數字: ");
    int a, b;
    scanf("%d %d", &a,&b);
    int ans = gcd(a, b);
    printf("答案是:%d", ans);
}

