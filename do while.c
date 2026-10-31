#include <stdio.h>

int main() {
	
int password;

do{
	printf("Enter your password: \t");
	scanf("%d", &password);

	if(password != 1234) {
		printf("Wrong password try again: \t\n");
	}
} 
    while(password != 1234);
	 printf("Access Granted");
 
return 0;
	
	
}