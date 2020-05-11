/**
* example1.c
* @author bulbasaur
* @description 
* @created 2020-04-19T11:39:14.785Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-19T12:41:12.916Z+08:00
*/

#include <stdio.h>

struct date
{
    /* data */
    int year;
    int month;
    int day;
}birthday;


int main() {
    struct date today;
    scanf("%d %d", &today.month, &today.day);
    if (today.month == 1 && today.day == 1)
    {
        /* code */
        printf("Happy new year~\n");
    }
    
    return 0;
}