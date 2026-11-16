#include <stdio.h>

int main(){
	int numb;
    char name[100];
	int i;
	
	printf("Enter the number of todays borrowed books: \t");
	scanf("%d", &numb);
	getchar();
	
	FILE*fptr;
	fptr = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\File\\borrowed_books.txt", "a");
	if(fptr == NULL){
		printf("Error opening the fie.");
		exit(1);
	}
	
	for(i = 0; i < numb; ++i){
		printf("For borrowed books %d\n\nEnter the name of the borrowed book: \t", i+1);
	    fgets(name, sizeof(name), stdin);
		fprintf(fptr, "%s", name);
		
		printf("The book title is successfully stored.\n");
	}

	
	fclose(fptr);
	
return 0;	
	
}