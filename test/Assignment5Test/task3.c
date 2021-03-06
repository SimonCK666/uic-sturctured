/**
* task3.c
* @author bulbasaur
* @description 
* @created 2020-05-16T11:01:35.774Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-22T21:01:07.467Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    /* data */
    char name[20];
    double score;
    struct n* next;
} Student;


int main(int argc, char const *argv[])
{
    Student *st[100];
    FILE *fp;
    char stuName[20];
    int stuScore[20], i = 0;
    
    // open file
    fp = fopen("student.txt", "rw");

    // install the fill information
    while (fscanf(fp, "%s %d", st[i]->name, st[i]->score))
    {
        /* code */
        stuName[i] = st[i]->name;
        stuScore[i] = st[i]->score;
    }
    
    printf("The students' information is: \n");
    // output the information
    for (int j = 0; j < 20; j++)
    {
        /* code */
        printf("%s %d\n", stuName[i], stuName[i]);
    }
    
    
    fclose(fp);
    return 0;
}
