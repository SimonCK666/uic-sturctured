/**
* task1.c
* @author bulbasaur
* @description 
* @created 2020-05-11T09:41:23.031Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-11T09:58:35.225Z+08:00
*/

#include <stdio.h>

int fileCopy(char *destFileName, char *resFileName);

int main(int argc, char const *argv[])
{
    char fileName1[20], fileName2[20];
    int flag;
    // read name of file to be copied
    scanf("%s", fileName1);
    // read name of file to copy to
    scanf("%s", fileName2);
    flag = fileCopy(fileName2, fileName1);
    if (flag == 1)
    {
        printf("Success\n");
    } else
    {
        printf("Failure\n");
    }
    
    return 0;
}

int fileCopy(char *destFileName, char *resFileName) {
    char str;
    FILE *rfp;
    FILE *dfp;
    rfp = fopen(resFileName, "w+");
    dfp = fopen(destFileName, "w+");
    
    if (rfp == NULL)
    {
        /* judge whether the file is exist */
        printf("Cannot open the file");
    }
    
    while ((str = fgetc(rfp)) != EOF)
    {
        /* copy the source into dest file */
        fputc(str, dfp);
    }
    
    fclose(rfp);
    fclose(dfp);
    rfp = NULL;
    dfp = NULL;
    
    return 1;
}