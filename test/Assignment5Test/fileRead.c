/**
* fileRead.c
* @author bulbasaur
* @description 
* @created 2020-05-15T17:19:14.554Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-15T17:21:16.401Z+08:00
*/

#include <stdio.h>
 
int main()
{
    int ch;
    int count;
    FILE *fp = freopen("in.txt","r",stdin);
    char buf[1024];

    // stdin 
    fp = stdin;
    /* 跳过第一行 */
    fgets(buf, sizeof(buf), fp);
    count = 1;
    while (fgets(buf, sizeof(buf), fp)) {
        /*  检测最后一行 */
        if (EOF != (ch = fgetc(fp))) {
            ungetc(ch, fp);
            printf("%6d\t%s", ++count, buf);
        } else {
            break;
        }
    }
    return 0;
}