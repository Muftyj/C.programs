#include<stdio.h>

float temperaturein_celcius (float temperatureinFahrenheit);

int main(){
	float temperaturein_celcius;
	float temperatureinFahrenheit;
	
	printf("Enter the temperature in Fahrenheit: \t");
	scanf("%f", &temperatureinFahrenheit);
	
	temperaturein_celcius = (temperatureinFahrenheit - 32) * 5/9;
	
	printf("The temperature in celcius is: %f", temperaturein_celcius);
	
	return 0;
}
float temperaturein_celcius(float temperatureinFahrenheit){
	 float temperaturein_celcius;
	 
	 return temperaturein_celcius;
	 
}
   