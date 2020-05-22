/**
* test2.c
* @author bulbasaur
* @description 
* @created 2020-05-18T10:56:37.162Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-18T11:00:28.043Z+08:00
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *stream;
    char list[30];
    int i, numred, numwritten;

    if (stream = fopen("student.txt", "w+t") != NULL)
    {
        /* code */
        for ( i = 0; i < 25; i++)
        {
            /* code */
            list[i] = (char)('z' - i);
            numwritten = fwrite(list, sizeof(char), 25, stream );
            printf("Wrote %d item\n", numwritten);
            fclose(stream);
        }
        
    }else
    {
        /* code */
        printf("Problem opening the file\n");
    }
    
    
    return 0;
}
