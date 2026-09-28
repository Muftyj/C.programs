/*
Name: James Gona Mkutano
Reg No: CT100/G/30611/26
Description: A C program to calculate the electricity bill for customers
*/

#include <stdio.h>

float calculateBill(float numberofunitsconsumeed);

int main() {

	float numberofunitsconsumed;
	float bill_amount;

	printf("Enter the number of units consumed: \t");
	scanf("%f", &numberofunitsconsumed);
	
	bill_amount = calculateBill(numberofunitsconsumed);
	
	printf("number of units consumed is: %f\n",numberofunitsconsumed);
	printf("the toal electricity bill amount is: %f\n", bill_amount);
	
	
		return 0;
}

float calculateBill(float numberofunits){
  float bill_amount;
  
  if (numberofunits <=100){
      bill_amount = 10 * numberofunits; 
}
 
 else if (numberofunits <= 200){
       bill_amount = 15 * numberofunits;
 }
 
   else if (numberofunits > 200){
        bill_amount = 20 * numberofunits;
}	

  return bill_amount;
  }