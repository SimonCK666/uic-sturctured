// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.10
// Task no: Week3#_Assignment1_2
/* Requirements:
Write a program to input an integer and decide if it is multiple of 3 or 2.
*/

#include <stdio.h>
int main() {
   int a;
   printf("Please input an interger:");
   scanf("%d", &a);
   
   /* judge whether the number is the multiple of 2 */
   if (a % 2 == 0)
   {
       /* code */
       printf("%d is the multiple of 2\n", a);
   } else
   {
       /* code */
       printf("%d is not the multiple of 2\n", a);
   }
   
   /* judge whether the number is the multiple of 3 */
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