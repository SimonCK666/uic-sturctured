// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.02.25
// Task no: Week_2_Exercise_5
/* Requirements:

*/

#include <stdio.h>
#include <math.h>
int main() {
    int height,x,y,m,z;
    float temp,pos;

    //The height is not equal to zero.
    height != 0;

    //The temperature (variable: temp) is greater than 32.0 and less than 212.0
    temp > 32.0 && temp < 212.0;

    //The absolute value of pos is greater than 5.0
    abs(pos) > 5.0;

    x = (y = 5 ) + 3;   // y is assigned 5; the value of (y = 5) is 5; x is assigned 8;

    x = y = 5 + 3;   // the value of " 5 + 3 " is 8; both x and y are assigned 8;

    x == (y = 5);   // y is assigned 5; the polynomial mains that judge whether the x equals 5;

    m = 5;
    y = ++m;
    x = m++;
    // Finally, the value of x is 6; the value of y is 6; the value of m is 7;

    x = 4;
    y = 5;
    z = (x > y) ? x : y;
    //The value of z is 5;

    x = 5;
    y = 4;
    z = (x > y) ? x :y;
    //The value of z is 5;

    int w = 10 ,x = 20 , y = 30 , z = 40;
    int temp1 , temp2;
    temp1 = x * x /++y + z / y;
    printf("temp1 = %d nw= %d; nx= %d; ny=ny=%d nz= %d\n", temp1 , w,x,y,z);
    y=30;
    temp2 = x * x /y++ + z / y;
    printf("temp2 = %d nw= %d; nx= %d; ny= %d; nz= %d\n",temp2 , w,x,y,z);
    /*teh value of this program is 
    temp1 = 13 nw= 10; nx= 20; ny=ny=31 nz= 40
    temp2 = 14 nw= 10; nx= 20; ny= 31; nz= 40
    */
    return 0;
}