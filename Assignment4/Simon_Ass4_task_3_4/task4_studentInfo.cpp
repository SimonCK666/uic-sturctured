/**
* task4.c
* @author bulbasaur
* @description 
* @created 2020-05-03T17:49:01.983Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-04T16:43:06.635Z+08:00
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20

typedef struct
{
    /* define the struct */
    char name[SIZE];
    int grade;
}Student;

void stuGrade_sort(Student stu[], int i);

int main() {    
    Student stu[SIZE];
    int i;
    printf("Please input the name and grade one by one: \n");
    for (i = 0; i < SIZE; i++)
    {
        /* input the student information */
        printf("Student %d: \n", i+1);
        scanf("%s %d", &stu[i].name, &stu[i].grade);
        if (stu[i].grade == -1)
        {
            /* input -1 end input */
            break;
        }
        
    }

    // Test
    // printf("---------------\n");
    // for (int j = 0; j < i; j++)
    // {
    //     /* code */
    //     printf("%s %d\n", stu[j].name, stu[j].grade);
    // }
    
    printf("---------------\n");
    // Call the function
    stuGrade_sort(stu, i);
    
    return 0;
}

void stuGrade_sort(Student stu[], int k) {
    Student temp;
    for (int i = 0; i < k - 1 ; i++)
    {
        for (int j = 0; i < k-1-i; i++)
        {
            /* sort the information */
            if (stu[j].grade < stu[j + 1].grade)
            {
                temp = stu[j + 1];
                stu[j + 1] = stu[j];
                stu[j] = temp;
            }
            
        }
        
    }
    
    printf("The student list in ascending order by grades: \n");

    for (int i = 0; i < k; i++)
    {
        /* print the student information */
        printf("%s %d\n", stu[i].name, stu[i].grade);
    }
    
}