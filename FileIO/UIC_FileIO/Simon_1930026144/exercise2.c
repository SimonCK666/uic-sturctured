/**
* main.c
* @author bulbasaur
* @description 
* @created 2020-05-10T21:59:32.960Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-10T22:11:52.947Z+08:00
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE* fp;
    fp = fopen("test.txt", "w");
    if (fp == NULL)
    {
        /* code */
        printf("Error: Cannot open the file!");
        return 1;
    } else
    {
        /* code */
        fprintf(fp, "%s", "Hello world\n");
        printf("Hello world is printed into text.txt file\n");
    }
    
    fclose(fp);
    
    return 0;
}
