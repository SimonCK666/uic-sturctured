/**
* task4.c
* @author bulbasaur
* @description 
* @created 2020-04-17T19:18:03.232Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-18T10:44:14.656Z+08:00
*/

#include <stdio.h>
 
int main()
{
	int x;
	for (x = 2; x <= 100; x++)
	{
		int i;
		int isPrime=1;
		for (i = 2; i < x; i++)
		{
			if (x%i==0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return 0;
}