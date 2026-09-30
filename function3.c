# include <stdio.h>

float calculatefare( float distance_kilometers);

int main() {
	
 float distance_kilometers;
 float fare;
 
 printf("Enter the distance in kilometers: \t");
 scanf("%f", &distance_kilometers);
 
 fare = distance_kilometers * 50;
 
 printf("If the distance is %f\n", distance_kilometers);
 printf("The fare is = %f\n", fare );

	return 0;
}

float calculatefare(float distance_kilometers) {
	float fare;
	
 if (distance_kilometers >= 1) {
	 fare = distance_kilometers * 50;
 }
	
	return fare;
	
}
