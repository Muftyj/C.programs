#include <stdio.h>

int main() {
	int rate;
	int principalamount;
	int time;
	float simple_interest;
	
	
	printf("Enter the rate: \t");
	scanf("%d", &rate);
	
	printf("Enter the principalamount: \t");
	scanf("%d", &principalamount);
	
	printf("Enter the time: \t");
	scanf("%d", &time);
	       
	
    simple_interest =( principalamount * time * rate )/ 100;
    
    
	printf("Your simple_interest is : %f", simple_interest);
	
	
	return 0;
}