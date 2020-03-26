/**
* 01.c
* @author bulbasaur
* @description 
* @created 2020-03-11T16:14:13.409Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-11T16:42:26.822Z+08:00
*/

#include <stdio.h>
int main() {
	int a,b;
    float x,y;
	float r1,r2;

	scanf("%d %d", &a, &b);
    x = a;
    y = b;
	// find the two results
	r1 = a / b;
    r2 = x / y;
	// r2 = (float)a / (float)b;

	printf("Integer:%d divided by %d is %.0f\n", a,b,r1);
	printf("Float:%d divided by %d is %.2f\n", a,b,r2);

	return 0;
}