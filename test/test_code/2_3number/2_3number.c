/**
* 2_3number.c
* @author bulbasaur
* @description 
* @created 2020-03-10T13:14:21.654Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-10T13:25:15.434Z+08:00
*/

#include <stdio.h>
int main() {
   int a;
   printf("Please input an interger:");
   scanf("%d", &a);
   
   if (a % 2 == 0)
   {
       /* code */
       printf("%d is the multiple of 2\n", a);
   } else
   {
       /* code */
       printf("%d is not the multiple of 2\n", a);
   }
   
   if (a % 3 == 0)
   {
       /* code */
       printf("%d is the multiple of 3\n", a);
   } else
   {
       /* code */
       printf("%d is not the multiple of 3\n", a);
   }

    
    return 0;
}