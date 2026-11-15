#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE*fptr;
	char borrowed_books[100];
	
	fptr = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\File\\borrowed_books.txt", "a");
	if(fptr == NULL){
		printf("Error opening the file");
		exit(1);
	}
	printf("Enter the borrowed book title:\n");
	fgets(borrowed_books, sizeof( borrowed_books), stdin);
	fputs( borrowed_books, fptr);
	
	printf("The title is successfully stored.");
	
	fclose(fptr);
	
	return 0;
}