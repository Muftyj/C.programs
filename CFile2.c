#include <stdio.h>

struct studentInfo{
	char name[100];
	int  marks, regNo;
};

int main(){
struct studentInfo student;	
int numb;
int i;
	
	printf("Enter the number of students: \t");
	scanf("%d", &numb);
	getchar();
	
FILE*fptr;
fptr = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\File\\results.dat", "wb");
    if(fptr == NULL){
	printf("Error opening the FILE.");
	exit(1);
}

    for(i = 0; i < numb; i++){
	printf("For student %d\n Enter the student's name: \t", i+1);
	fgets(student.name, sizeof(student.name), stdin);
	
	printf("Enter the stdent's registration number: \t");
	scanf("%d", &student.regNo);
	
	printf("Enter the stdent's marks: \t");
	scanf("%d", &student.marks);
	getchar();
	
	fwrite(&student, sizeof(student), 1, fptr);
	 }

fclose(fptr);

fptr = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\File\\results.dat", "rb");
    if(fptr == NULL){
	printf("Error opening the FILE.");
	exit(1);
	}
	
	for(i = 0; i < numb; i++){
		fread(&student, sizeof(student), 1, fptr);
		printf("The student' name is : %s\n", student.name);
		printf("The student's registration number is: %d\n", student.regNo);
		printf("The student's marks = %d\n", student.marks);
	}
	fclose(fptr);
	
	
   
   return 0;
}