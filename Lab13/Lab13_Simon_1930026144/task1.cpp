// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.05.11
// Task no: Week_13_Task_1
/* Requirements: 
Write a function int fileCopy(char *destFileName, char *resFileName)
to copy the content from the file resFileName to the file
destFileName. If the file is copied successfully, return 1, else
return 0. If the file copy successes, check the file content in
fileName2. The main function is as follows:
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
    rfp = fopen(resFileName, "r");
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