/**
* task3.c
* @author bulbasaur
* @description 
* @created 2020-05-16T11:01:35.774Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T11:21:00.352Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char stuName[20];
    int stuID;
    
    fp = fopen("student.txt", "rw");

    while (fscanf(fp, "%s %d", stuName, &stuID) != EOF)
    {
        printf("%s %d\n", stuName, stuID);
    }
    
    fclose(fp);
    return 0;
}
