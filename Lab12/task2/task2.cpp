// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.05.04
// Task no: Week12_Task_2
/* Requirements:
Finish the program according to the requirements in the comments.

*/

#include <stdio.h>
#include <string.h>

struct Student
{
    /* data */
    char str[10];
    int marks;
};

int main() {
    int values[5] = {2, 4, 6, 8, 22};
    char str[10];
    char *p;
    int n = 0, i;
    struct Student stu[20];
    struct Student *ps;

    strcpy(str, "UVWXYZ");
    p = str;
    
    // print the third element in the array values using three different expressions
    printf("%d %d %d\n", values[2], *(values+2), values[2]);
    // print third char in str through str and p respectively
    printf("%c %c\n", str[2], *(p+2));
    // print str string through str and p respectively
    printf("%s, %s\n", str, p);

    for ( i = 0; i < 20; i++)
    {
        /* read student's names and marks */
        scanf("%s %d", &stu[i].str, &stu[i].marks);
        if (stu[i].marks == -1)
        {
            break;
        }
        
    }
    n = i - 1;
    
    // with the following two statements, print out the name and marks through ps
    ps = stu;
    printf("first student's name: %s, marks: %d\n", ps->str, ps->marks);
    
    return 0;
}