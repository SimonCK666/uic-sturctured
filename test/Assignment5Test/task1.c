/**
* task1.c
* @author bulbasaur
* @description 
* @created 2020-05-15T17:01:57.504Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-15T18:51:36.841Z+08:00
*/

// #include <stdio.h>
// int main()
// {
//    int n,i=0,a[100];
//    scanf("%d",&n);
//    while(n!=0)//这里的0就是特定数字。可以随便改
//    {
//       a[i++]=n;//将输入的数存入数组
//       scanf("%d",&n);
//    }
//    for(int j=0;j<i;j++)
//    printf("%d,",a[j]);//输出度数组
//    return 0;
// }

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i = 0;
    int num[20];
    int *np = num;
    printf("Please input the number one by one (End with -1): \n");
    scanf("%d", &n);
    while (n != -1)
    {
        /* input the number one by one and end with -1 */
        num[i++] = n;
        scanf("%d", &n);
    }
    
    printf("The Numbers' Values and Addresses are: \n");

    for (int j = 0; j < i; j++)
    {
        /* output the values of pointers */
        printf("%d\t\t", *(np+j));
    }

    printf("\n");
    
    for (int k = 0; k < i; k++)
    {
        /* output the addresses of the pointers */
        printf("%p\t", (np+k));
    }
    
    printf("\n");
    
    return 0;
}

