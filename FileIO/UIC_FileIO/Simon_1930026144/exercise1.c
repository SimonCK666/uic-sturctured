/**
* main.c
* @author bulbasaur
* @description 
* @created 2020-05-10T21:51:02.853Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-10T21:55:15.409Z+08:00
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char stuName[20];
    int stuID;
    
    fp = fopen("infile.txt", "r");
    while (fscanf(fp, "%s %d", stuName, &stuID) != EOF)
    {
        /* code */
        printf("%s %d\n", stuName, stuID);
    }
    
    fclose(fp);
    return 0;
}
