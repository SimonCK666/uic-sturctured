#include <stdio.h>
int main() {
    int w = 10 ,x = 20 , y = 30 , z = 40;
    int temp1 , temp2;
    temp1 = x * x /++y + z / y;
    printf("temp1 = %d nw= %d; nx= %d; ny=ny=%d nz= %d\n", temp1 , w,x,y,z);
    y=30;
    temp2 = x * x /y++ + z / y;
    printf("temp2 = %d nw= %d; nx= %d; ny= %d; nz= %d\n",temp2 , w,x,y,z);

    return 0;
}