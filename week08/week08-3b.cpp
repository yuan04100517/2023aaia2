#include <stdio.h>
int main()
{
    int i,j,n;
    printf("請輸入大小:\n");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
       for( j=1 ; j <=i ;j++)
           printf(" ");
       for(j=1 ; j<=n ; j++)
            printf("*");
       printf("\n");
      
}} 