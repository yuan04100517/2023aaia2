#include <stdio.h>
int z = 100;
void myFunc() {
     int x = 20;
     printf("myFunc()裡的 : %d z: %d\n", x, z);
     printf("在離開時, 順手把 x 和 z 都設成 0\n");
     x = 0;
     z = 0;
}

int main()
{
    int x = 10;
    printf("main() 裡的 x: %d z: %d\n", x, z);
    myFunc();
    printf("main() 裡的 x: %d z: %d\n", x, z);
}

