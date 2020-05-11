/**
* fgetspus.c
* @author bulbasaur
* @description 
* @created 2020-05-10T11:19:14.049Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-10T11:21:21.309Z+08:00
*/

 #include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *src, *dst;
    char str[256];
    src = fopen("infile.txt", "r");
    dst = fopen("outfile.txt", "w");
    while ((fgets(str, 256, src)) != NULL)
    {
        /* code */
        fputs(str, dst);
    }
    fclose(src);
    fclose(dst);
    
    return 0;
}
 