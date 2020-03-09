// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.08
// Task no: Week4#_Task_3
/* Requirements: 
Write a program to read an amount of Euro dollars and change to
HK dollar or RMB. Please output the amount of HK dollar or RMB
depending on the choice. Assume the exchange rate between Euro
dollar and HK dollar is 8.1, between Euro dollar and RMB is 7.2.
Please choose proper data type and decimal places.
*/

#include <stdio.h>
int main() {
	int inMoney,cho;
	float hK=0,rMb=0;
	printf("Please input amount in Euro:");
	scanf("%d", &inMoney);

	printf("Please choose the currency converting to (1:HK dollor, 2: RMB):");
	scanf("%d", &cho);

	// change the euro to HK
	if (cho == 1) {
		hK = inMoney * 8.1;
		printf("%d euro = %.2f HK dollar\n", inMoney,hK);
	}

	// change the euro to RMB
	if (cho == 2) {
		rMb = inMoney * 7.2;
		printf("%d euro = %.2f RMB\n", inMoney,rMb);
	}	
	
	return 0;
}