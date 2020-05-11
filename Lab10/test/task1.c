/**
* task1.c
* @author bulbasaur
* @description 
* @created 2020-04-19T09:36:41.055Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-19T10:50:14.701Z+08:00
*/


#include <stdio.h>
// Define the function
int factorial(int n);
 
int main()
{
	int n, result;
	
    // Input the integer
	printf("please input a positive integer:");
	scanf("%d",&n);
	
    result = factorial(n);
    
	printf("The result = %d\n", result);
	
	return 0;

}

int factorial(int n)
{
	if(n == 1)  // Close the recursive judgment condition
	{
		return 1;
	}
    
	return n*factorial(n - 1); // Recursively call itself
}