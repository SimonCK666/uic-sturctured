/**
* test.c
* @author bulbasaur
* @description 
* @created 2020-05-03T18:24:26.830Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-03T18:31:43.658Z+08:00
*/



#include <stdio.h>
int main()
{
   int n,i=0,a[100];
   scanf("%d",&n);
   while(n!=0)//这里的0就是特定数字。可以随便改
   {
      a[i++]=n;//将输入的数存入数组
      scanf("%d",&n);
   }
   for(int j=0;j<i;j++)
   printf("%d,",a[j]);//输出度数组
   return 0;
}