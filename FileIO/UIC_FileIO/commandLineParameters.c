/**
* commandLineParameters.c
* @author bulbasaur
* @description 
* @created 2020-05-10T09:43:35.139Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-10T09:48:34.134Z+08:00
*/

#include <stdio.h>
/*
argc: The number of arguments passed
*argv[]: each element points to an argument 
*/
int main(int argc, char const *argv[])
{
    int i;
    printf("There are %d command line parameters. \n\nThey are: \n", argc);
    for ( i = 0; i < argc; i++)
    {
        /* code */
        printf("%s\n", argv[i]);
    }
    
    return 0;
}
