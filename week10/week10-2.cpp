#include <stdio.h>
int myAdd(int a, int b){
    return a + b;
}
int main()
{
    int ans = myAdd(2, 3);
    printf("ans: %d\n", ans);
}
