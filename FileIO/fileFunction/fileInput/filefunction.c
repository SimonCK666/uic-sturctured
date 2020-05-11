/**
* filefunction.c
* @author bulbasaur
* @description 
* @created 2020-05-05T16:41:01.342Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-06T17:19:58.977Z+08:00
*/

/*
    FILE
        - FILE* fopen(const char *restrict path, const char *restrict mode);
        - int fclose(FILE *stream);
        - fscanf(FILE*, ...);
        - fprintf(FILE*, ...);
*/

/*
    打开文件的标准代码
    
    FILE* fp = fopen("file", "r");
    if( fp ) {
        fscanf(fp, ...);
        fclose(fp);
    } else {
        ...
    }
*/

/*
fopen:
    1. r: 打开只读
    2. r+: 打开读写，从文件头开始
    3. w: 打开只写， 如果不存在则新建，如果存在则清空
    4. w+: 打开读写， 如果不存在则新建，如果存在则清空
    5. a: 打开追加，如果不存在则新建，如果存在则从文件尾开始
    5. x: 只新建，如果文件已经存在则不能打开
*/



#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("12.in", "r");
    
    if ( fp )
    {
        /* code */
        int num;
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
        fclose(fp);

    } else
    {
        /* code */
        printf("Can not open file.\n");
    }
    
    
    return 0;
}
