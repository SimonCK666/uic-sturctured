/**
* test7.c
* @author bulbasaur
* @description 
* @created 2020-03-29T20:09:16.206Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-29T20:20:47.517Z+08:00
*/

#include <stdio.h>
void isTrangle(int a, int b, int c);
int main() {
    int a, b, c;
    printf("Please input three length with space:");
    scanf("%d %d %d", &a, &b, &c);

    isTrangle(a, b, c);
    
    return 0;
}

void isTrangle(int a, int b, int c) {
    if (a + b > c && a - b < c)
    {
        /* code */
        printf("It is a triangle.\n");
    } else if (a <= 0 || b <= 0 || c <= 0)
    {
        /* code */
        printf("Illegal input.\n");
    } else
    {
        /* code */
        printf("It is not a triangle.\n");
    }
    
    
}