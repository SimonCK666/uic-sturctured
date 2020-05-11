/**
* BasicFileOperations.c
* @author bulbasaur
* @description 
* @created 2020-05-10T10:10:01.689Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-10T10:47:04.567Z+08:00
*/

/*
Basic File Operations
    1. Open a file
    2. Read data from a file
    3. Write data to a file
    4. Close a file

Declare a file pointer
    1. Format          -->   FILE *fp;
    2. declares a pointer variable that points to FILE type
    3. reading or writing files is through the defined pointer variables

Open a file:   -->  fopen
    1. Prototype: FILE* fopen(char *fileName, char *mode);
    2. Function call
        fp = fopen(fileName, mode);
            fp: Declared file pointer variable
            mode: Open mode
                r: Open a file for reading
                w: Create an empty file for writing. If a file with the same name already exists, its content is erased and the file is treated as a new empty file
                a: Append to a file. Append data at the end of the file. The file is created if it does not.
                r+: Open a file for update both reading and writing. The file must exist
                w+: Create an empty file for both reading and writing. If a file with the same name already exists, its content is erased and the file is treated as a new empty file
                a+ Open a file for reading and appending
    3. If the file fails to open, fopen returns NULL
    4. If the file opens successfully, it will return a file ointer to the pointer variable

Close a file:    -->  fclose
    1. Prototype: int fclose(FILE* filePointer);
    2. Function call: 
        fclose(fp);
    3. EXAMPLE:
        FILE *myFile;
        myFile = fopen("data.ini", "r");
        ...
        fclose(myFile);

Read From/Write To A File
    Functions
        fgetc()
        fputc()
        fgets()
        fputs()
        fscanf()
        fprintf()
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char c;
    // open the file
    fp = fopen("infile.txt", "r");
    
    // get the characters one by one
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c\t", c);
    }
    fclose(fp);
    
    return 0;
}
