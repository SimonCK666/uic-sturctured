/**
* copyString.c
* @author bulbasaur
* @description 
* @created 2020-05-04T15:35:41.867Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-04T15:38:40.861Z+08:00
*/

#include <stdio.h>

void sopyString (char *to, char *from) {
    // from指针遇到空指针的时候结束循环（字符串的最后一个字符为\0，也就是空指针，空指针和0等价）
    while ( *from )
    {
        /* 将from指针指向的值赋值给to指针指向的值，然后两个指针分别递增1 */
        *to++ = *from++;
    }
    *to = '\0';   // 给to指针指向的字符串的最后一位赋值为\0结束符
}

int main() {
    char string1[] = "hahahahah";
    char string2[20];
    
    sopyString(string2, string1);
    printf("%s\n", string2);
    return 0;
}