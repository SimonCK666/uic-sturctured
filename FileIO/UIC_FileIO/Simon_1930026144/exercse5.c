/**
* exercse5.c
* @author bulbasaur
* @description 
* @created 2020-05-10T22:54:20.477Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-10T23:01:43.291Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>
struct sturec {
    char name[20];
    int id;
};
int main(int argc, char const *argv[])
{
    struct sturec *p;
    printf("***Dynamic Memory Allocation***\n\n");
    p = (struct sturec *)malloc(sizeof(struct sturec));
    if ( p )
    {
        /* code */
        printf("Student Name: ");
        gets(p->name);
        printf("Student ID: ");
        scanf("%d", &p->id);
        printf("Student Name: %-10s", p->name);
        printf("Student ID: %4d\n", p->id);
    } else
    {
        /* code */
        printf("Out of memory\n");
    }
    
    
    return 0;
}
