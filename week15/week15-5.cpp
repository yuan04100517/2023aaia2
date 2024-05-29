#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0;
    for(int i=1; i<=N; i++){
        if(i*i==N){
            ans =i;
            break;
        }
    }        
    printf("%d", ans);
}