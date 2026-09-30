#include <stdio.h>

int main() {
	
	int age;
	int annual_income;
	
	printf("Please enter your age: \t");
	scanf("%d", &age );
	
	printf("Please enter your annual income: \t");
	scanf("%d", &annual_income);
	
if 	(age > 21, annual_income >= 21000) {
	printf("Congaratulation you qualify fot a loan****");}

else if	(age < 21, annual_income <21000) {
	printf("Unfortunately we are unable to offer you a loan at this time!!!!");
}		
	
	return 0;
}