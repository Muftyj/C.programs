/*
Name : James Gona Mkutaano
Reg No : CT100/G/30611/26
Gender : Male
Description : This is a C prograam that promts the user to enter some detail of him/herself
*/

#include<stdio.h>

int main() {
	float Height;
	double Bankbalance;
	int Phonenumber;
	
	printf("Enter your heights: \t");
	scanf("%f", &Height);
	
	printf("Enter your Bank balance: \t");
	scanf("%lf", &Bankbalance);
	
	printf("Enter your phone number: \t");
	scanf("%d", &Phonenumber);
	
	printf("Your Height is: %f\n", Height);
	printf("Your Bank balance is: %lf\n", Bankbalance);
	printf("Your phone number is: %d\n", Phonenumber);
	
	return 0;
}