/**
* test10.c
* @author bulbasaur
* @description 
* @created 2020-04-26T20:42:18.943Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-26T21:23:42.761Z+08:00
*/

#include <stdio.h>

#define SIZE 50

struct student
{
    /* data */
    char name[SIZE];
    float score;
    char major[SIZE];
};


int main() {
    int x;
    
    printf("INPUT: ");
    scanf("%d", &x);
    
    while (x > 50)
    {
        /* code */
        printf("AGAIN: ");
        scanf("%d", &x);
    }
    printf("%d\n", x);



    struct student stu[50];
    printf("Please input ST: \n");
    for (int i = 0; i < x; i++)
    {
        /* code */
        scanf("%s %f %s", stu[i].name, &stu[i].score, stu[i].major);
    }
    
    printf("-----------------\n");

    for (int j = 0; j < x; j++)
    {
        /* code */
        printf("%s %f %s\n", stu[j].name, stu[j].score, stu[j].major);
    }
    
    
    return 0;
}