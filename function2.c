/*
Name: James Gona Mkutano
Reg No: CT100/G/30611/26
Description: A C program to calculate the net salary of an employee using function
*/


#include <stdio.h>


float calculate_Tax(float gross_salary);

int main(){	
	
	float gross_salary;
	float Net_salary;
	float tax;

	printf("Enter the employee's gross_salary: \t");
	scanf("%f", &gross_salary);
	
	tax = calculate_Tax(gross_salary);
    Net_salary = gross_salary - tax;
	
	printf("The gross salary = %f\n",gross_salary);
	printf("The tax amount = %f\n", tax);
	printf("The employee's Net salary is: %f\n", Net_salary);
	
	return 0;
}

float calculate_Tax(float gross_salary) {
	float tax;
if (gross_salary <= 30000){
	tax = gross_salary * 0.05;
}

else if (gross_salary <= 59999){
      tax = gross_salary * 0.1;
}
	
else if (gross_salary >= 60000)	{
       tax = gross_salary * 0.15;
}

 return tax;
	
}