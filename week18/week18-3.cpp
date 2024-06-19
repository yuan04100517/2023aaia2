#include <stdio.h>
int prime(int n)
{
    for(int i=2; i<n; i++){
        if(n%i==0) return 0;
        }
        return 1;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = 0;
    for(int i=a; i<=b; i++){
        if(prime(i)) ans++;
    }
    printf("%d\n", ans);
}