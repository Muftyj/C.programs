#include <stdio.h>

int main() {
	
	int account_balance;
	int withdrawal_amount;
	
	
	printf("Enter your bank account balance: \t");
	scanf("%d",&account_balance);
	
		while (account_balance > 0) {
		   printf("Enter the amount you wish to withdraw: \t");
		   scanf("%d", & withdrawal_amount);
           
		   account_balance = account_balance - withdrawal_amount;
	    	printf("Your balance is: %d\n", account_balance); 
	    	
	    	 withdrawal_amount++;
	}
	 
	
	return 0;
}