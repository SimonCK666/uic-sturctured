/**
* task2.c
* @author bulbasaur
* @description 
* @created 2020-04-17T19:17:48.873Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-17T21:06:50.597Z+08:00
*/


#include <stdio.h>
#include <string.h>
int main(){
    char s[80], c;
    int j, k;
    printf("Enter a string: ");
    gets(s);
    // scanf("%s", s);
    printf("Enter a character: ");
    // c=getchar();
    scanf("%c", &c);

    
    for(j=k=0; s[j]!='\0'; j++) {
        if(s[j]!=c) {
            s[k++]=s[j];
        }
    }
        
    s[k]= '\0';
    printf("\n%s",s);

    return 0;
}