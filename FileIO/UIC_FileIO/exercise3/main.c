/**
* main.c
* @author bulbasaur
* @description 
* @created 2020-05-10T22:25:29.419Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-10T22:33:14.931Z+08:00
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE* fp;
    fp = fopen("out.dat", "w");
    
    for (int i = 0; i < 10; i++)
    {
        /* code */
        fprintf(fp, "%d\n", i);
    }
    
    fclose(fp);
    
    return 0;
}
