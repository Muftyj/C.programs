#include<stdio.h>

int main() {
	int Occupancy[5][10];
	int f, r;
	srand(time(0));
	
	for(f = 0; f < 5; f++) {
		for(r = 0; r < 10; r++) {
		   Occupancy[f][r] = rand() %2;
		}
	}
	for(f = 0; f < 5; f++) {
		for(r = 0; r < 10; r++) {
		   printf("%d ", Occupancy[f][r]);
		}
		printf("\n");
	}
}