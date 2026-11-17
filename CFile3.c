#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numb;
	int transactions;
	int total_sales = 0;
	int i;
	char line[100];
	
	printf("Enter the number of of todays transaction: \t");
	scanf("%d", &numb);

	
	FILE*fptr;
	fptr = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\File\\sales.txt","a");
	if(fptr == NULL){
		printf("Error opening the file.");
		exit(1);
	}
	
	for(i = 0; i < numb; i++){
    printf("For transaction: %d\nEnter the amount: \t", i+1);
    scanf("%d", &transactions);
	total_sales = total_sales + transactions;
	
	fprintf(fptr, "Transaction %d: %d\n", i+1, transactions);
		
	}
	
	fprintf(fptr, "The total sales for today are : %d\n\n", total_sales);
    printf("The total sales for today are: %d", total_sales);
	fclose(fptr);
	
		fptr = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\File\\sales.txt","r");
	if(fptr == NULL){
		printf("Error opening the file.");
		exit(1);
	}
	
	while(fgets(line, sizeof(line), fptr)){
		printf("\n%s", line);
	}
	
	fclose(fptr);
	
	
	return 0;	
}