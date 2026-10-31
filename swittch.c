#include<stdio.h>

int main(){
	
int choise;

printf("Select data bundle\n");
printf("1. 100MB @ 50 KES\n");
printf("2. 500MB @ 200 KES\n");
printf("3. 1GB   @ 350 KES\n");
printf("4. 2GB   @ 600 KES\n");

printf("Enter your choise (1-4): \t");
scanf("%d", &choise);

if(choise == 1){
	printf("You selected 100MB. Cost = 50KES");
}

else if(choise == 2){
	printf("You selected 500MB. Cost = 200KES");
}

else if(choise == 3){
	printf("You selected 1GB. Cost = 350KES");
}

else if(choise == 4){
	printf("You selected 2GB. Cost = 600KES");
}

else{
	printf("invalid choise");
}


	return 0;
}