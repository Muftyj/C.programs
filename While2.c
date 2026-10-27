#include<stdio.h>

int main()
{
int guess;
int secret_no;    
	
	while(secret_no <= 20) {
		printf("Guess a number: \t");
		scanf("%d", &guess);
		

		if(guess > secret_no) { 
			printf("Too high!\n");}
		
		else if(guess < secret_no){ 
			printf("Too low!\n");}
		
		else
		{
			printf("Congratulation\n");
		}
		
		guess++;
	}
	return 0;
}