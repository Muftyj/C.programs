#include<stdio.h>

int main() {
	
	float revenue[7];
	float weekly_revenue = 0;
	float average_revenue;
	int i;
	
	
	for(i=0; i < 7; i++) {
		printf("Enter the revenue for the day: \t", i+1);
		scanf("%f", &revenue[i]);
		weekly_revenue = weekly_revenue + revenue[i];
		
	}
	
	average_revenue = weekly_revenue / 7;
	
	printf("The weekly revevenue is: %f\n", weekly_revenue);
	printf ("The average revenue is : %f\n", average_revenue);
	
	
	return 0;
}