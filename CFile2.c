#include <stdio.h>
#include <stdlib.h>

struct student_information{
   char Student_name[12];
   int registration_number;
   int Student_marks;		
};

int main(){
   struct student_information student;
   char Student_name[12];
   int registration_number;
   int Student_marks;

FILE*fptr;

fptr = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\File\\results.dat", "ab");
if(fptr == NULL){
	printf("Error opening the file.");
	exit(1);
}
 
   printf("Enter the student's Name: \t");
   fgets(student.Student_name, sizeof( Student_name), stdin);
    student.Student_name[strcspn(student.Student_name, "\n")] = 0;
   
  
   printf("\nEnter the student's registration number: \t");
   scanf("%d", &student.registration_number);
  
   printf("\nEnter the student's marks: \t");
   scanf("%d", &student. Student_marks);
  
   fwrite(&student, sizeof(struct student_information), 1, fptr);
   
   fclose(fptr);
	
	
fptr = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\File\\results.dat", "rb");
if(fptr == NULL){
	printf("Error opening the file.");
	exit(1);
}
  while(fread(&student, sizeof(struct student_information), 1, fptr) == 1) {
   printf("Student name: %s\n", student.Student_name);
   printf("Reg No: %d\n", student.registration_number);
   printf("Marks: %d\n", student.Student_marks);
  }ss
     fclose(fptr);
	
	return 0;
}